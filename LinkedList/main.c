//
//  main.c
//  LinkedList
//
//  Created by Vaibhav Anand on 30/06/21.
//
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//    int info;
//    struct node *link;
//};
//void display(struct node *start);
//struct node *addatbeg(struct node *start, int data);
//struct node *addatend(struct node *start, int data);
//struct node *createList(struct node *start );
//struct node *addafter(struct node *start,int data,int item);
//struct node *addbefore(struct node *start,int data,int item);
//struct node *del(struct node *start,int data);
//struct node *reverse(struct node *start);
//struct node *reverseK(struct node *start,int k);
//struct node *reverseREC(struct node *start);
//int main()
//{
//    struct node *start=NULL;
//    start=createList(start );
//    display(start);
//    int k;
////    struct node *newstart=reverseK(start,k);
//    printf("\n");
//    struct node *newstart=reverseREC(start);
//    display(newstart);
//    return 0;
//}
//void display(struct node *start)
//{
//    struct node *p;
//    if (start==NULL)
//    {
//        printf("empty list");
//        return;
//    }
//    p=start;
//    printf("list is:");
//    while (p!=NULL)
//    {
//        printf("%d->",p->info);
//        p=p->link;
//    }
//}
//struct node *addatbeg(struct node *start, int data)
//{
//    struct node *tmp;
//    tmp= (struct node *)malloc(sizeof(struct node));
//    tmp->info=data;
//    tmp->link=start;
//    start=tmp;
//    return start;
//}
//struct node *addatend(struct node *start, int data)
//{
//    struct node *p,*tmp;
//    tmp=(struct node *)malloc(sizeof(struct node));
//    tmp->info=data;
//    p=start;
//    while(p->link!=NULL)
//        p=p->link;
//    p->link=tmp;
//    tmp->link=NULL;
//    return start;
//}
//struct node *createList(struct node *start )
//{
//    int i,n,data;
//    printf("enter no of nodes ");
//    scanf("%d",&n);
//    if (n==0)
//        return start;
//    printf("enter fisrt ele ");
//    scanf("%d",&data);
//    start=addatbeg(start,data);
//    for (i=1;i<n;i++)
//    {
//        printf("enter data ");
//        scanf("%d",&data);
//        start=addatend(start,data);
//    }
//    return start;
//}
//struct node *addafter(struct node *start,int data,int item)
//{
//    struct node *tmp,*p;
//    p=start;
//    while(p!=NULL)
//    {
//        if (p->info==item)
//        {
//            tmp=(struct node *)malloc(sizeof(struct node));
//            tmp->info=data;
//            tmp->link=p->link;
//            p->link=tmp;
//            return start;
//        }
//        p=p->link;
//    }
//    printf("element not in list\n");
//    return start;
//}
//struct node *addbefore(struct node *start,int data,int item)
//{
//    struct node *tmp,*p;
//    if (start==NULL)
//    {
//        printf("empty list");
//        return start;
//    }
//    if (start->info==item)
//    {
//        tmp=(struct node *)malloc(sizeof(struct node));
//        tmp->info=data;
//        tmp->link=start;
//        start=tmp;
//        return start;
//    }
//
//    p=start;
//    while(p->link!=NULL)
//    {
//        if (p->link->info==item)
//        {
//            tmp=(struct node *)malloc(sizeof(struct node));
//            tmp->info=data;
//            tmp->link=p->link;
//            p->link=tmp;
//            return start;
//
//        }
//        p=p->link;
//    }
//    printf("not in list\n");
//    return start;
//}
//struct node *del(struct node *start,int data)
//{
//    struct node *tmp,*p;
//    if (start==NULL)
//    {
//        printf("List empty");
//        return start;
//    }
//    if (start->info==data)
//    {
//        tmp=start;
//        start=start->link;
//        free(tmp);
//        return start;
//    }
//    p=start;
//    while(p->link!=NULL)
//    {
//        if (p->link->info==data)
//        {
//            tmp=p->link;
//            p->link=tmp->link;
//            free(tmp);
//        }
//        p=p->link;
//    }
//    printf("Not in List");
//    return start;
//}
//struct node *reverse(struct node *start)
//{
//    struct node *prev,*curr,*nxt;
//    prev=NULL;
//    curr=start;
//    while(curr!=NULL)
//    {
//        nxt=curr->link;
//        curr->link=prev;
//        prev=curr;
//        curr=nxt;
//    }
//    start=prev;
//    return start;
//}
//struct node *reverseK(struct node *start,int k)
//{
//    struct node *prev,*curr,*next;
//    prev=NULL;
//    curr=start;
//    int count=0;
//    while (curr!=NULL && count<k)
//    {
//        next=curr->link;
//        curr->link=prev;
//        prev=curr;
//        curr=next;
//        count++;
//    }
//    if (next!=NULL)
//    {
//        start->link=reverseK(next,k);
//    }
//    return prev;
//}
//struct node *reverseREC(struct node *start)
//{
//    if (start==NULL || start->link==NULL)
//    {
//        return start;
//    }
//    struct node *newstart=reverseREC(start->link);
//    start->link->link=start;
//    start->link=NULL;
//    return newstart;
//}
//DOUBLY LINKED LIST
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//    struct node *next;
//    int info;
//    struct node *prev;
//};
//struct node *create_list(struct node *start);
//void display(struct node *start);
//struct node *addtoempty(struct node *start, int data);
//struct node *addtoend(struct node *start,int data);
//struct node *addtobeg(struct node *start, int data);
//struct node *addafter(struct node *start,int data,int item);
//struct node *addbefore(struct node *start,int data,int item);
//struct node *del(struct node *start,int data);
//struct node *reverse_doubly(struct node *start);
//int main()
//{
//    struct node *start=NULL;
//    start=create_list(start);
//    start=addtobeg(start,10);
////    start=addafter(start,10,12);
////    start=addbefore(start,11,12);
//    start=reverse_doubly(start);
//    display(start);
//    return 0;
//}
//void display(struct node *start)
//{
//    struct node *p;
//    if (start==NULL)
//    {
//        printf("empty list");
//    }
//    p=start;
//    while(p!=NULL)
//    {
//        printf("%d ",p->info);
//        p=p->next;
//    }
//    printf("\n");
//}
//struct node *create_list(struct node *start)
//{
//    int i,n,data;
//    printf("enter no of nodes ");
//    scanf("%d",&n);
//    start=NULL;
//    if (n==0)
//        return start;
//    printf("enter the data ");
//    scanf("%d",&data);
//    start=addtoempty(start,data);
//    for (i=1;i<n;i++)
//    {
//        printf("enter the data ");
//        scanf("%d",&data);
//        start=addtoend(start,data);
//    }
//    return start;
//}
//struct node *addtoempty(struct node *start, int data)
//{
//    struct node *tmp;
//    tmp= (struct node *)malloc(sizeof(struct node));
//    tmp->info=data;
//    tmp->prev=NULL;
//    tmp->next=NULL;
//    start=tmp;
//    return start;
//}
//struct node *addtobeg(struct node *start, int data)
//{
//    struct node *tmp;
//    tmp= (struct node *)malloc(sizeof(struct node));
//    tmp->info=data;
//    tmp->prev=NULL;
//    tmp->next=start;
//    start->prev=tmp;
//    start=tmp;
//    return start;
//}
//struct node *addtoend(struct node *start,int data)
//{
//    struct node *tmp,*p;
//    tmp= (struct node *)malloc(sizeof(struct node));
//    tmp->info=data;
//    p=start;
//    while(p->next!=NULL)
//        p=p->next;
//    tmp->next=NULL;
//    p->next=tmp;
//    tmp->prev=p;
//    return start;
//}
//struct node *addafter(struct node *start,int data,int item)
//{
//    struct node *tmp,*p;
//    tmp= (struct node *)malloc(sizeof(struct node));
//    tmp->info=data;
//    p=start;
//    while(p!=NULL)
//    {
//        if(p->info==item)
//        {
//            tmp->prev=p;
//            tmp->next=p->next;
//            if (p->next!=NULL)
//                p->next->prev=tmp;
//            p->next=tmp;
//            return start;
//        }
//        p=p->next;
//    }
//    printf("NOT IN LIST");
//    return start;
//}
//struct node *addbefore(struct node *start,int data,int item)
//{
//    struct node *tmp,*q;
//    if(start==NULL)
//    {
//        printf("list empty add before");
//        return start;
//    }
//    if (start->info==item)
//    {
//        tmp= (struct node *)malloc(sizeof(struct node));
//        tmp->info=data;
//        tmp->prev=NULL;
//        tmp->next=start;
//        start->prev=tmp;
//        start=tmp;
//    }
//    q=start;
//    while(q!=NULL)
//    {
//        if (q->info==item)
//        {
//            tmp= (struct node *)malloc(sizeof(struct node));
//            tmp->info=data;
//            tmp->next=q;
//            tmp->prev=q->prev;
//            q->prev->next=tmp;
//            q->prev=tmp;
//            return start;
//        }
//        q=q->next;
//    }
//    printf("%d not in list",item);
//    return start;
//}
//struct node *del(struct node *start,int data)
//{
//    struct node *tmp;
//    if (start==NULL)
//    {
//        printf("empty list");
//        return start;
//    }
//    if (start->next==NULL)
//    {
//        tmp=start;
//        start=NULL;
//        free(tmp);
//        return start;
//    }
//    if (start->info==data)
//    {
//        tmp=start;
//        start=start->next;
//        start->prev=NULL;
//        free(tmp);
//        return start;
//    }
//
//    tmp=start->next;
//    while(tmp->next!=NULL)
//    {
//        if (tmp->info==data)
//        {
//            tmp->next->prev=tmp->prev;
//            tmp->prev->next=tmp->next;
//            free(tmp);
//            return start;
//        }
//        tmp=tmp->next;
//    }
//    if (tmp->info==data)
//    {
//        tmp->prev->next=NULL;
//        free(tmp);
//        return start;
//    }
//    printf("%d NOT IS LIST TO DELETE",data);
//    return start;
//}
//struct node *reverse_doubly(struct node *start)
//{
//    struct node *p1,*p2;
//    p1=start;
//    p2=start->next;
//    p1->next=NULL;
//    p1->prev=p2;
//    while(p2!=NULL)
//    {
//        p2->prev=p2->next;
//        p2->next=p1;
//        p1=p2;
//        p2=p2->prev;
//    }
//    start=p1;
//    printf("list reversed ");
//    return start;
//}
//CIRCULAR LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *create_list(struct node *last);
void display(struct node *last);
struct node *addtoempty(struct node *last,int data);
struct node *addatbeg(struct node *last,int data);
struct node *addatend(struct node *last,int data);
struct node *addafter(struct node *last,int data,int item);
struct node *del(struct node *last,int data);
int main()
{
    struct node *last=NULL;
    last=create_list(last);
//    last=addtoempty(last,10);
//    last=addatbeg(last,20);
//    last=addafter(last,30,10);
    last=del(last,30);
    display(last);
    return 0;
}
void display(struct node *last)
{
    struct node *p;
    if (last==NULL)
    {
        printf("empty list");
        return;
    }
    p=last->link;
    do
    {
        printf("%d->",p->info);
        p=p->link;
    }
    while(p!=last->link);
    printf("\n");
}
struct node *create_list(struct node *last)
{
    int i,n,data;
    printf("enter the no of nodes");
    scanf("%d",&n);
    last=NULL;
    if(n==0)
        return last;
    printf("Enter the element to be inserted");
    scanf("%d",&data);
    last=addtoempty(last,data);
    for (i=2;i<=n;i++)
    {
        printf("Enter the element to be inserted");
        scanf("%d",&data);
        last=addatend(last,data);
    }
    return last;
}
struct node *addtoempty(struct node *last,int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    last=tmp;
    last->link=last;
    return last;
}
struct node *addatbeg(struct node *last, int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=last->link;
    last->link=tmp;
    return last;
}
struct node *addatend(struct node *last,int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=last->link;
    last->link=tmp;
    last=tmp;
    return last;
}
struct node *addafter(struct node *last,int data,int item)
{
    struct node *tmp,*p;
    p=last->link;
    do
    {
        if (p->info==item)
        {
            tmp=(struct node *)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->link=p->link;
            p->link=tmp;
            if (p==last)
                last=tmp;
            return last;
        }
        p=p->link;
    }
    while (p!=last->link);
    printf("ITEM NOT IN LIST**");
    return last;
}
struct node *del(struct node *last,int data)
{
    struct node *tmp,*p;
    if (last==NULL)//delete only node
    {
        printf("EMPTY LIST");
        return last;
    }

    if (last->link==last && last->info==data) //delete first node
    {
        tmp=last->link;
        last->link=tmp->link;
        free(tmp);
        return last;
    }
    p=last->link;
    while(p->link!=last)
    {
        if (p->link->info==data)
        {
            tmp=p->link;
            p->link=tmp->link;
            free(tmp);
            return last;
        }
        p=p->link;
    }
    if(last->info==data)
    {
        tmp=last;
        p->link=last->link;
        free(tmp);
        return last;
    }
    printf("NOT  %d IN LIST", data);
    return last;
}
