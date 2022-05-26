#include<stdio.h>
void main()
{
    int a[10],tot=0,i;
    float avg;
    printf("ENTER MARKS OF 10 STUDENTS:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        tot=a[i]+tot;
    }
    avg=tot/2;
    printf("TOTAL:%d\n",tot);
    printf("AVG:%f",avg);
}
