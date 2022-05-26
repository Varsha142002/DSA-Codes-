#include<stdio.h>
void main()
{

    int n;
    printf("enter the number of houses \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the number of units consumed \n3");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int sum;
    for(int i=0;i<n;i++)
    {

        if(arr[i]>=100)
              sum =1.5*arr[i];

        else if(arr[i]>=101&&arr[i]<=250);
        {


             sum=100*1.5+(arr[i]-150)*2.3;
       }
         if(arr[i]>251&&arr[i]<600)
        {


             sum=100*1.5+150*2.3+(arr[i]-250)*4;
       } else if(arr[i]>=600)
       {


            sum=100*1.5+150*2.3+350*4+(arr[i]-600);


            sum=sum++;


    }
    printf("the total amount collected %d \n",sum);

}
}
