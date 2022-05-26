# include <stdio.h>
void main()
{
int n;
printf("enter the size of the array \n");
scanf("%d",&n);
int a[n];
int b[n];
   printf("enter the elements of the first array \n");
      for(int i=0;i<n;i++)
              {
    scanf("%d",&a[i]);
              }
          printf("enter the elements of the second array \n");
               for(int i=0;i<n;i++)
               {
                   scanf("%d",&b[i]);
               }
    int c;
    for(int i=0;i<n;i++)
               {

                   c=a[i];
                   a[i]=b[i];
                   b[i]=c;
               }

                printf("the first array\n");
                for(int i=0;i<n;i++)
                {

                    printf("%d \n",a[i]);
                }
                printf("the elements of the second array \n");
                for(int i=0;i<n;i++)
                {
                    printf("%d \n",b[i]);

                }

}
