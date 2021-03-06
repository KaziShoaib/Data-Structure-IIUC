/*
BFS
*/

#include<stdio.h>

#define MAX 20
int adj[MAX][MAX], n, status[25], quee[500], front, rear;

int main()
{
    int max_edge, i, j, origin, destin, x;
    char graph_type;

    printf("enter the number of nodes : ");
    scanf("%d",&n);
    printf("enter the type of graph : ");
    fflush(stdin);
    scanf("%c",&graph_type);
    if(graph_type=='u')
        max_edge=n*(n-1)/2;
    else
        max_edge=n*(n-1);
    for(i=1;i<=max_edge;i++)
    {
        printf("enter edge %d\nenter(0,0) to quit : ",i);
	scanf("%d%d",&origin,&destin);
        if(origin==0&&destin==0)
            break;
        if(origin>n||destin>n||origin<=0||destin<=0)
        {
            printf("invalid edge");
            i--;
            continue;
        }
        adj[origin][destin]=1;
        if(graph_type=='u')
            adj[destin][origin]=1;
    }
    for(i=1;i<=n;i++)
        status[i]=1;
    for(i=1;i<=n;i++)
    {
        if(status[i]==1)
        {
            front=1;
            rear=1;
            quee[front]=i;
            status[i]=2;
            while(front<=rear)
            {
                x=quee[front];
                front++;
                status[x]=3;
                printf("%d ",x);
                for(j=1;j<=n;j++)
                    if(adj[x][j]&&status[j]==1)
                    {
                        quee[++rear]=j;
                        status[j]=2;
                    }
            }
        }
    }
    printf("\n");
    return 0;
}
