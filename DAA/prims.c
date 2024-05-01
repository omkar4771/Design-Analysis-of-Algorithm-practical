#include <stdio.h>

void prim(int n,int cost[10][10])
{
    int visited[10] = {0}, i, j, min_cost = 0, min, u, v,e;

    visited[1] = 1;

        for(e = 1; e <= n; e++)
            {
                for(i = 1,min=999; i <= n; i++)
                    for(j = 1;j <= n; j++)
                    {
                        if(cost[i][j]==0)
                            cost[i][j]=999;
                        if(cost[i][j]<min)
                            if(visited[i]!=0)
                        {
                            min= cost[i][j];
                            u=i;
                            v=j;
                        }
                    }


       if(visited[u]==0 || visited[v] == 0)
       {
        printf("Eage %d:(%d, %d) cost: %d\n",e, u, v, min);
        min_cost += min;
        visited[v]=1;
       }
       cost[u][v] = cost[v][u]=999;
    }

    printf("Minimum cost: %d\n", min_cost);
}

int main() {
    int i, j,n,cost[10][10];

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix: \n");
    for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                scanf("%d", &cost[i][j]);
            }
        }
    printf("MST edges: \n");
    prim(n,cost);

    return 0;
}
