 /*First take input number of vertices and edges in graph G. Then input all the indexes of adjacency matrix of G whose value is 1. Now we will try to color each of the vertex. A next_color(k) function takes in index of the kth vertex which is to be colored. First we assign color1 to the kth vertex.Then we check whether it is connected to any of previous (k-1) vertices using backtracking. If connected then assign a color x[i]+1 where x[i] is the color of ith vertex that is connected with kth vertex.*/
 #include<stdio.h>
int G[50][50],x[50];  //G:adjacency matrix,x:colors
void next_color(int k){
   int i,j;
   x[k]=1;  //coloring vertex with color1
   for(i=0;i<k;i++){ //checking all k-1 vertices-backtracking
     if(G[i][k]!=0 && x[k]==x[i])  //if connected and has same color
       x[k]=x[i]+1;  //assign higher color than x[i]
   }
}

int main(){
  int n,e,i,j,k,l;
  printf("Enter no. of vertices : ");
  scanf("%d",&n);  //total vertices
  printf("Enter no. of edges : ");
  scanf("%d",&e);  //total edges
 
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      G[i][j]=0;  //assign 0 to all index of adjacency matrix
     
  printf("Enter indexes where value is 1-->\n");
  for(i=0;i<e;i++){
    scanf("%d %d",&k,&l);
    G[k][l]=1;
    G[l][k]=1;
  }
 
  for(i=0;i<n;i++)
    next_color(i);  //coloring each vertex

  printf("Colors of vertices -->\n");
  for(i=0;i<n;i++)  //displaying color of each vertex
    printf("Vertex[%d] : %d\n",i+1,x[i]);

  return 0;
}
