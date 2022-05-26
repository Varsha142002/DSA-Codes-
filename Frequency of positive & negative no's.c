#include<stdio.h>
void main()
{
    int a[100],n,pos=0,neg=0,i,j;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
            pos++;
        else
            neg++;
    }
    printf("Freq of pos numbers: %d\n",pos);
    printf("Freq of neg numbers: %d",neg);
}
