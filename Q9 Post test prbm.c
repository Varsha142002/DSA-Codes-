#include<stdio.h>
void main()
{

    int n;
    printf("enter the number of students who took the test \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the marks obtained by each student \n");
    for(int i=0;i<n;i++)
    {

        scanf("%d", &arr[i]);

    }
    int ec=0,oc=0,fc=0;
    for(int i=0;i<n;i++)
    {

        if((arr[i]%2)==0)
            ec++;
        else
            oc++;

        if(arr[i]==1)
            printf("the number %d is neither odd nor even \n",arr[i]);

        if(arr[i]==10)

            fc++;
    }

    printf("the number of students who got even marks %d \n",ec);
    printf("the number of students who got odd number of marks %d \n",oc);
        if(fc!=0)
        printf("yes some students have scored 100% marks \n");
        printf("the number  of students who have scored 100% marks are %d \n",fc);
}
