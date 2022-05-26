#include<stdio.h>
struct cricketer
{
    char team_name[15];
    char player_name[15];
    int ODI_rank;
};

void main()
{
    struct cricketer player[100],t;
    int i,j,n;
    printf("Enter the no of cricket players\n");
    scanf("%d",&n);
    printf("Enter player info as team_name, player_name, ODI_rank\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",player[i].team_name,&player[i].player_name,&player[i].ODI_rank);
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(player[j].ODI_rank>player[j+1].ODI_rank)
            {
                t=player[j];
                player[j]=player[j+1];
                player[j+1]=t;
            }
        }
    }

    printf("\nCricketer info in terms of ODI_rank from lowest to highest\n");
    printf("\nTeam_name\t\tPayer_name\t\t\tODI_rank\n");
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%s\t\t\t%s\t\t\t%d\n",player[i].team_name,player[i].player_name,player[i].ODI_rank);
    }
}
