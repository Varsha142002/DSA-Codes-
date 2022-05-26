#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    char data[20];
    struct node *prev;
    struct node *next;
}*NODE;

NODE getNode(char d[20])
{
    NODE n = (NODE)malloc(sizeof(struct node));
    if(n==NULL)
        exit(0);
    strcpy(n->data, d);
    n->next = NULL;
    n->prev = NULL;
    return n;
}

NODE insert_end(NODE head, char d[25])
{
    NODE temp = getNode(d);
    if(head==NULL)
        return temp;
    NODE cur = head;
    while(cur->next!=NULL)
        cur = cur->next;
    cur->next = temp;
    temp->prev = cur;
    return head;
}

NODE delete(NODE head, char key[20])
{
    if(head==NULL)
        return head;
    NODE cur = head;
    while(cur!=NULL)
    {
        if(!(strcmp(cur->data,key)))
            break;
        cur = cur->next;
    }
    if(cur->next==NULL)
        cur->prev->next = NULL;
    else
    {
        cur->prev->next = cur->next;
        cur->next->prev = cur->prev;
    }
    free(cur);
    return head;
}

void display(NODE head)
{
    if(head==NULL)
        printf("Empty list.\n");
    else
    {
        NODE cur = head;
        while(cur!=NULL)
        {
            printf("%s ", cur->data);
            cur = cur->next;
        }
    }
}

int main()
{

    NODE head = NULL;
    int n, m;
    char d[20];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s", d);
        head = insert_end(head,d);
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        scanf("%s", d);
        head = delete(head, d);
    }
    display(head);
    return 0;
}
