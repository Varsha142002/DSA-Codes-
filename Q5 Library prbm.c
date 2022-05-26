#include<stdio.h>

 void main()
 {

     int N;
     printf("enter the number of students who returned the books after the deadline \n");
     scanf("%d",&N);
     int arr[N];

     for(int i=0;i<N;i++)
     {

         printf("enter the number of days after which the student  %d ",(i+1) ,"returned the book \n");
         scanf("%d",&arr[i]);
     }
     int pen,tpen,avgpen,minpen,maxpen,maxd,mind;
     for(int i=0;i<N;i++)
     {

         tpen=arr[i]*2;
         pen=pen+tpen;

     }
     avgpen=pen/N;

    maxd=arr[0],mind=arr[0];

     for(int i=0;i<N;i++)
     {

         if(arr[i]>maxd)
            maxd=arr[i];
         if(arr[i]<mind)
            mind=arr[i];

     }
        maxpen=maxd*2;
        minpen=mind*2;


     printf("the total penalty collected %d \n",pen );
     printf("the average penalty collected %d \n", avgpen);
     printf("the maximum penalty is %d \n",maxpen);
     printf("the minimum penalty collected is %d \n",minpen);

 }
