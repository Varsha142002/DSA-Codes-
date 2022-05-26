#include<stdio.h>
void main()
{
    int n,a[100],i,j,temp;
    printf("Enter the num of students:");
    scanf("%d",&n);
    printf("\nEnter the Rank:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ranks in ascending order :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
