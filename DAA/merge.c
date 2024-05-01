/* Program of sorting using merge sort through recursion*/
#include<stdio.h>
void merge( int a[10],int low, int mid, int high );
void merge_sort( int a[10],int low, int high );
void display(int a[10],int n);
int main()
{
    int n,a[10],i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("\n Enter array elements:");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	printf("Unsorted list is :\n");
	display(a,n);
	merge_sort( a,0, n-1);
	printf("\nSorted list is :\n");
	display(a,n);
	printf("\n");
	return 0;
}
void display(int a[10],int n)
{
    int i;
    for( i = 0 ; i<n ; i++)
	printf("%d\t", a[i]);
}
void merge(int a[10], int low, int mid, int high )
{
	int temp[10];
	int i = low;
	int j = mid +1 ;
	int k = low ;
	while( (i <= mid) && (j <=high) )
	{
		if(a[i] <= a[j])
			temp[k++] = a[i++] ;
		else
			temp[k++] = a[j++] ;
	}
	while( i <= mid )
		temp[k++]=a[i++];
	while( j <= high )
		temp[k++]=a[j++];
	for(i= low; i <= high ; i++)
		a[i]=temp[i];
}

void merge_sort( int a[10],int low, int high )
{
	int mid;
	if( low < high )
	{
		mid = (low+high)/2;
		merge_sort(a, low , mid );
		merge_sort(a, mid+1, high );
		merge(a, low, mid, high );
	}
}
