#include<stdio.h>
struct book_details
{
    int ISBN;
    char book_name[100];
    int pages;
};
typedef struct book_details ab;


void read(ab b[100],int n);
void display(ab b[100],int n);
void search(ab b[100],int n);
void sort(ab b[100],int n);
void main()
{
    ab b[100];
    int n;
    printf("enter the no of books:");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
    search(b,n);
    sort(b,n);
    display(b,n);
}

void read(ab b[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the ISBN:");
        scanf("%d",&b[i].ISBN);
        printf("enter the book name:");
        scanf("%s",b[i].book_name);
        printf("enter the no of pages:");
        scanf("%d",&b[i].pages);
    }
}

void display(ab b[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("\n ISBN:%d",b[i].ISBN);
    printf("\n book name:%s",b[i].book_name);
    printf("\n no of pages:%d",b[i].pages);
    printf("\n");
    }
}


void search(ab b[100],int n)
{
    int i,s;
    printf("enter the ISBN to search:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==b[i].ISBN)
        {
            printf("\n ISBN:%d",b[i].ISBN);
            printf("\n book name:%s",b[i].book_name);
            printf("\n no of pages:%d",b[i].pages);
            printf("\n");
            break;
        }
    }
}

void sort(ab b[100],int n)
{
int i,j;
ab swap;
for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(b[j].ISBN > b[j+1].ISBN)
      {
        swap= b[j];
        b[j]= b[j+1];
        b[j+1]=swap;
      }
    }
  }
  printf("After sorting \n");
}
