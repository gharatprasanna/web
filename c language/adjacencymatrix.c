//Program to represent graph as adjacency matrix.
#include <stdio.h> 
#define MAX 10
void degree(int adj[][MAX], int x,int n)
{
int i,incount=0, outcount=0;
for(i=0;i<n;i++)
{
if(adj[x][i] ==1)
outcount++;
if(adj[i][x] ==1)
incount++;
}
printf("The indegree of the node %d is %d\n", x, incount++);
printf("The outdegree of the node %d is %d\n",x, outcount++);
} 
int main()
{
int adj[MAX][MAX],n,i,j;
setbuf(stdout, NULL);
printf("Enter the total number of nodes in graph");
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{ 
printf("Enter Edge from %d to %d, (1: Edge, 0: No edge) \n",i,j); 
scanf("%d",&adj[i][j]);
} 
for (i=0; i<n;i++)
{
 degree(adj, i,n);
}
return 0;
}