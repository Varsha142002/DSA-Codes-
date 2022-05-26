#include<stdio.h>
void main()
{
    int a[100],n,key,i,j;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key number to search: \n");
    scanf("%d",&key);
    for(j=0;j<n;j++)
    {
        if(a[j]==key)
        {
            printf("The key element is present in the array at index:\t%d",j);
            break;
        }
        else if(a[j]!=key)
          {
              printf("The key element is not present in the array");
            break;
          }
    }
}
