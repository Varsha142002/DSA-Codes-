#include<stdio.h>
void main()
{
    int n,a[100],tot=0,min,max=0,i;
    float avg;
    printf("Enter the num of students:");
    scanf("%d",&n);
    printf("\nEnter the num of days the return was delayed:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]*2;
        tot=tot+a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    avg=tot/2.0;
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\nTOTAL:%d\n",tot);
    printf("AVG:%f\n",avg);
    printf("MIN:%d\n",min);
    printf("MAX:%d\n",max);
}
