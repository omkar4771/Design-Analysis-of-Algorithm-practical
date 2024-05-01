#include<stdio.h>

void selectionsort(int a[],int n);
void display(int a[],int n);
int main()
{
    int a[10],i,n;
  printf("\n Enter the number of elements:");
  scanf("%d",&n);
  printf("\n Enter array elements:");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\n Sorted elements are:");
heapsort(a,n);
  display(a,n);
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
     printf("\t%d",a[i]);
}

void heapsort(int a[], int n,int i)
{
    int largest=i;
int l=(2*i)+1;
int r=(2*i)+1;
while(l<=n && a[l]>a[largest])
{
largest=l;
}
while(r<=n && a[r]>a[largest])
{
largest=r;
}
if(largest!=i)
{
a[largest]=a[i];

 heapsort(a,n, largest);
}
}

    
