#include <stdio.h>
 void main()
 {

     int n;
     printf("enter the nmumber of tax payers\n");
         scanf("%d",&n);
         int arr[n];
         printf("enter the amount paid by each in tax\n");
         for(int i=0;i<n;i++)
         {

             scanf("%d", &arr[i]);

         }
         int ctr=0,ctr2=0;
         int  sum,avg;

         for(int i=0;i<n;i++)
         {

             sum=arr[i]+sum;

             if(arr[i]>250000)
                ctr++;
             if((arr[i]>50000)&&(arr[i]<150000))
                ctr2++;

         }
         avg=sum/n;

         printf("the number of people who paid tax more than 2.5 lakhs %d \n",ctr);
         printf("the number of people who paid taxes btwn 50k to 1.5lakhs %d \n",ctr2);
         printf("the average taxes paid %d \n " ,avg);
 }
