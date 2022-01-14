#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100], substr[100][100];
    int i=0,k=0,j=0,max=0,min=0,l,maxindex=0,minindex=0;
    scanf("%[^\n]s", str);
    while (str[i]!='\0')
    {
        k=0;
        while (str[i]!=' '&&str[i]!='.' &&str[i]!='\0')
        {
            substr[j][k]=str[i];
            i++;
            k++;
        }
        substr[j][k]='\0';
        j++;
        if (str[i]!='\0')
        {
            i++;
        }
    }
    int len=i;
    max= strlen(substr[0]);
    min= strlen(substr[0]);

    for (i=0;i<len;i++)
    {
        l=strlen(substr[i]);
        if (l>max)
        {
            max=l;
            maxindex=i;
        }
    }
    for (i=0;i<len;i++)
    {
        l=strlen(substr[i]);
        if (l<min)
        {
            min=l;
            minindex=i;
        }

    }

    printf("Smallest word is: %s\n",&substr[minindex][0]);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0};

scanf("%[^\n]s", str);

int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
char c;
while(str[k]!='\0')  //for splitting sentence into words
    {
        j=0;
        while(str[k]!=' '&&str[k]!='\0' && str[k]!='.')
        {
            substr[i][j]=str[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
    max=strlen(substr[0]);
    min=strlen(substr[0]);
    for(i=0;i<len;i++)
    {
       a=strlen(substr[i]);
       if(a>max)
        {
            max=a;
            maxIndex=i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
    }
  printf("Largest Word is: %s\nSmallest word is: %s\n",substr[maxIndex],substr[minIndex]);
  return 0;
}
#include <stdio.h>
int main()
{
    int arr[20][20],i,j;
    int r;
    scanf("%d",&r);
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            if (j>i)
                printf("%d", 0);
            else
                printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
#include <stdio.h>
int main()
{
    struct book
    {
        char name[10]; float price; int pages;
    };
    struct book b[2];
    int i,xx;
    for (i=0;i<2;i++)
    {
        scanf("%s%f%d",&b[i].name,&b[i].price, &b[i].pages);
//        fflush(stdin);
        while((xx=getchar())!='\n');
    }
    for (i=0;i<2;i++)
        printf("%s %f %d\n",b[i].name,b[i].price,b[i].pages );
    return 0;
}
void linkfloat()
{
    float a=0, *b;
    b=&a;
    a=*b;
}
#include <stdio.h>
struct book
{
    char name[25]; char author[25]; int callno;
};
void display1(char * ,char *, int);
void display2(struct book);
void display3(struct book *);
int main()
{
//    struct book
//    {
//        char name[25]; char author[25]; int callno;
//    };
    struct book b={"LeTusc","YPK", 101};
    display1(b.name,b.author,b.callno);
    display2(b);
    display3(&b);
    return 0;
}
void dispaly1(char *s,char *t, int n)
{
    printf("%s %s %d",s,t,n);
}
void display2(struct book b)
{
    printf("%s %s %d\n",b.name,b.author,b.callno);
}
void display3(struct book *ps)
{
    printf("%s %s %d",ps->name,ps->author,ps->callno);
}
#include <stdio.h>
int main()
{
    struct address
    {
        char phone[15];char city[15];int pin;
    };
    struct employee
    {
        char name[15];
        struct address a;
    };
    struct employee e={"Resx","566898","BLR",560064};
    printf("%s %s %s %d \n", e.name,e.a.city,e.a.phone,e.a.pin);
    return 0;
}
#include <stdio.h>
void fact(int , long int *);
int main()
{
    int num;
    long int fac;
    scanf("%d", &num);
    fact(num,&fac);
//    printf("factorial of number is %ld\n", fact);
    return 0;
}
void fact(int num, long int *f)
{
    int i;
    *f=num;
    for (i=1;i<num;i++)
        *f=*f * i;
    printf("%ld ", *f);
}
#include <stdio.h>
int main()
{
    struct mlist
    {
        int num ;char name[25];int point;
    };
    int ent,i,j;
    scanf("%d", &ent);
    struct mlist L[ent];
    for (i=0;i<ent;i++)
    {
        scanf("%d%s%d",&L[i].num,L[i].name,&L[i].point);
    }
    struct mlist temp;
    for (j=0;j<ent-1;j++)
    {
        for (i=0;i<ent-1;i++)
        {
            if (L[i].point<L[i+1].point)
            {
                temp=L[i];
                L[i]=L[i+1];
                L[i+1]=temp;
            }
        }
    }

    for (i=0;i<ent;i++)
    {
        printf("%d %s %d\n",L[i].num,L[i].name,L[i].point);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    float *elements;
    scanf("%d",&n);
    elements=(float*) calloc(n, sizeof(float));
    if(elements == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    for (i=0;i<n;i++)
    {
        scanf("%f", elements+i);
    }
    for (i=1;i<n;i++)
    {
        if (*elements<*(elements+i))
            *elements=*(elements+i);
    }
    printf("%f", *elements);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int *elements;
    scanf("%d",&n);
    elements=(int*) calloc(n, sizeof(int));
    if(elements == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    for (i=0;i<n;i++)
    {
        scanf("%d", elements+i);
    }
    for (i=1;i<n;i++)
    {
        if (*elements<*(elements+i))
            *elements=*(elements+i);
    }
    printf("MAX ELEMENT IS %d ", *elements);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int *a1=(int *) malloc(size*sizeof(int));
    int *a2= (int *) malloc(size*sizeof(int));
    int *c= (int *) malloc(size*sizeof(int));
    for (i=0;i<size;i++)
    {
        scanf("%d",a1+i);
    }
    for (i=0;i<size;i++)
    {
        scanf("%d",a2+i);
    }
    for (i=0;i<size;i++)
    {
        *(c+i)=*(a1+i) + *(a2+i);
    }
    for (i=0;i<size;i++)
    {
        printf("output %d\n",*(c+i));
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node* head;
void insert(int x);
void Print();

int main(){
    head=NULL;
    int n,i,x;
    printf("How many numbers do you want to insert?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        printf("Enter the number: \n");
        scanf("%d",&x);
        insert(x);
        Print();
        }
    }

void insert(int x){
      struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)
        temp->next=head;
    head=temp;
}

void Print(){
    struct Node* temp=head;
    printf("List is:");
    while(temp!=0){
        printf("%d", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
inserting a node at the nth position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int ,int );
void print();

int main(){
 head=NULL;
    int i,x,n,data;

    printf("How many numbers do you want to enter?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter the number and position\n");
        scanf("%d%d",&data,&n);
        insert(data,n);
        print();
    }


}

void insert(int data, int n){
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
}

void print(){
    struct Node* temp=head;
    printf("The list is ");
    while(temp!=NULL){
        printf("%d" , temp->data);
        temp=temp->next;
    }
    printf("\n");
}


inserting a node at the nth position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int data,int n);
void print();

int main(){
 head=NULL;

        insert(5, 1);
        insert(7,2);
        insert(9,3);
        insert(5,2);
        print();


}

void insert(int data, int n){
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node*temp2=(struct Node*)malloc(sizeof(struct Node));
        for(int i=0;i<n-2;i++){
            temp2=temp2->next;
            temp1->next=temp2->next;
        }

}

void print(){
    struct Node* temp=head;
    printf("The list is");
    while(temp!=NULL){
        temp=temp->next;
    }
    printf("\n");
}
#include <stdio.h>
int main()
{
    int i,start=0,end=3,temp;
    int arr[]={1,4,3,2};
    int count=sizeof(arr)/sizeof(int);
    printf("%d\n",count);
    while (start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for (i=0;i<4;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<stdio.h>

void rev(int a[], int size);
 int main(){
     int max;
     printf("enter the size of numbers in array");
     scanf("%d",&max);
     int a[max];
     for(int i=0;i<max;i++)
     {
         scanf("%d",&a[i]);
     }


     rev(a,max);
     return 0;
 }


 void rev(int a[], int max)
 {
//     int size=sizeof(a)/sizeof(int);
//     printf("size is %d",size);
     printf("size is %d",max);
     int temp;
     int start=0;
     int end=max-1;
     while (start<end)
     {
         temp=a[start];
         a[start]=a[end];
         a[end]=temp;
         start++;
         end--;
     }
     for(int j=0;j<max;j++)
     {
         printf("%d",a[j]);
     }
 }
#include<stdio.h>
void min_max(int a[],int size);


int main(){
int size;

printf("Enter the size of arraay");
scanf("%d",&size);
int a[size];
for(int i=0;i<size;i++)
{
    scanf("%d",&a[i]);

}
min_max(a,size);
}

void min_max(int a[],int size)
{
    int min, max;
    min=max=a[0];
//    if(size==1)
//    {
//        min=a[0];
//        max=a[0];
//    }
//    else {
    for(int i=1;i<size;i++)
        {
            if(a[i]>max)
                max=a[i];
            if(min>a[i])
                min=a[i];
        }
    printf("Max and Min are %d  %d  respectively", max,min);

}
#include <stdio.h>
void minmax(int arr[],int size);
int main()
{

}
void minmax(arr[],size)
{

    int min,max,i;
    if (size%2==0)
    {
        if (arr[0]>arr[1])
        {
            min=arr[1];
            max=arr[0];
        }
        else
        {
            min=arr[0];
            max=arr[1];
        }
        i=2;
    }

    else
    {
        min=arr[0];
        max=arr[0];
        i=1;
    }
    while(i<size-1)
    {
        if (arr[i] > arr[i+1])
        {
            if (arr[i]>max)
                max=arr[i];
            if (arr[i+1]<min)
                min=arr[i+1];
        }
        else
        {
            if (arr[i+1]>max)
                max=arr[i+1];
            if (arr[i]<min)
                min=arr[i];
        }
        i=i+2;
     }

    printf("%d %d ",min,max);
}
#include<stdio.h>

struct pair{
    int min;
    int max;

};
struct pair getminmax(int a[],int n){
    struct pair minmax;
    int i;
    /*if array has even no. of elements*/
    if(n%2==0){
        if(a[0]>a[1])
        {
            minmax.max=a[0];
            minmax.min=a[1];
        }
        else{
            minmax.max=a[1];
            minmax.min=a[0];
        }
        i=2;
    }
    else{
        minmax.min=a[0];
        minmax.max=a[0];
        i=1;
    }
    while(i<n-1){
        if(a[i]>a[i+1])
        {
            if(a[i]>minmax.max)
                minmax.max=a[i];
            if(a[i+1]<minmax.min)
                minmax.min=a[i+1];
        }
        else{
            if(a[i+1]>minmax.max)
                minmax.max=a[i+1];
            if(a[i]<minmax.min)
                minmax.min=a[i];
        }
        i+=2;
    }
    return minmax;

}

int main()
{
    int arr_size;
    printf("enter the size of array:");
    scanf("%d",&arr_size);
    int a[arr_size];
    for(int i=0;i<arr_size;i++){
        scanf("%d",&a[i]);
    }

  struct pair minmax = getminmax (a, arr_size);
  printf("nMinimum element is %d", minmax.min);
  printf("nMaximum element is %d", minmax.max);
  getchar();

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *addatbeg(struct node *start, int data)
{
    struct node *tmp;
    tmp= (struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
}
int main()
{
    struct node *start=NULL;
    int data;
    scanf("%d",&data);
    start= addatbeg(start,data);
    return 0;
}
