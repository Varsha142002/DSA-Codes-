#include <stdio.h>

#include <stdlib.h>



struct book_details

{

    int ISBN;
    char name[50];
    int pages;

};



void read(struct book_details *p,int n)

{

    int i;

    printf("\nEnter %d book details:",n);

    for(i=0;i<n;i++)

    {

        scanf("%d%s%s",&p->ISBN,p->name,p->pages);

        p++;

    }

}



void display(struct book_details *p,int n)

{

    int i;

    printf("\nEntered %d book details:",n);

    for(i=0;i<n;i++)

    {

        printf("ISBN number:%d  Name:%s   Pages:%d\n",p->ISBN,p->name,p->pages);

        p++;

    }

}



void sort(struct book_details *p,int n)

{

    int i,j;

    struct book_details temp,*q;

    for(i=0;i<n-1;i++)

    {

        for(j=0;j<n-1;j++)

        {

            q=p;

            if((p->ISBN)>((p+1)->ISBN))

            {

                temp=*q;

                *q=*(q+1);

                *(q+1)=temp;

            }

            q++;



        }

    }

    display(p,n);

}



void search(struct book_details *p,int n)

{

    int i,key,s=0;

   printf("\nEnter number to search:");

    scanf("%d",&key);

    for(i=0;i<n;i++)

    {

        if(p->ISBN==key)

        {

            printf("\nKey found\n");

            printf("ISBN number:%d  Name:%s   Author:%s",p->ISBN,p->name,p->pages);

            s=1;

            break;

        }

        p++;

    }

    if(s==0)

        printf("\nKey not found");



}



int main()

{

    int n;

    struct book *p;

    printf("\nEnter n: ");

    scanf("%d",&n);

    p=(struct book_details*)malloc(n*sizeof(struct book_details));

    read(p,n);

    display(p,n);

    sort(p,n);

    search(p,n);

    return 0;

}
