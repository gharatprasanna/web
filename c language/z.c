#include<stdio.h>
#define MAX_VERTICES 10  // maximum number vertices 
int main(){
int adjacencyMATRIX[MAX_VERTICES][MAX_VERTICES];
int vertices,edges;
int i,j,vertex1,vertex2;
// initialize adjacency matrix
for(i=0;i<MAX_VERTICES;i++){
    for(j=0;j<MAX_VERTICES;j++){
        adjacencyMATRIX[i][j]=0;
    }
}
printf("Enter the number of vertices in the graph (maximum %d):", MAX_VERTICES);
scanf("%d",&vertices);
printf("Enter the number of edges in the graph :");
scanf("%d",&edges);
printf("ente the edges in graph:\n");
for(i=0;i<edges;i++){
    scanf("%d%d",&vertex1,&vertex2);
    // assuming the graph in undirected 
    adjacencyMATRIX[vertex1][vertex2]=1;
    adjacencyMATRIX[vertex2][vertex1]=1;
}
// displaying the adjacency matrix
printf("\nAdjacencyMatrix\n");
for(i=0;i<vertices;i++){
    for(j=0;j<vertices;j++){
        printf("%d",adjacencyMATRIX[i][j]);
    }
    printf("\n");
}
return 0;
}