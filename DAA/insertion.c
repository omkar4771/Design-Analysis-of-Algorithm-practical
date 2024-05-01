#include<stdio.h>
int main()
{
 int i,j,n,x,a[10];
 printf("\n Enter the no of elements:");
 scanf("%d",&n);
 printf("\n Enter the unsorted data:");
    for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\n Display the unsorted data:");
 for(i=0;i<n;i++)
   printf("%4d",a[i]);
/* 2 loop requred for comparision i for ul */
 for(i=1;i<n;i++)//for ul
  {
   x=a[i];//store 1st element from ul to x
   for(j=i-1;j>=0 && x<a[j];j--)//reuired for decreament 
	a[j+1]=a[j];
   a[j+1]=x;
  }
  printf("\n Display the sorted data:");
  for(i=0;i<n;i++)
     printf("%4d",a[i]);
  return 0;
}
/*
	       OUTPUT
 Enter the no of elements:4

 Enter the unsorted data:8
6
4
2

 Display the unsorted data:   8   6   4   2
 Display the sorted data:   2   4   6   8
*/
