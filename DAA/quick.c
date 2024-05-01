#include<stdio.h>
void display(int a[],int n);
int partition(int a[],int lb,int ub);
void quicksort(int x[],int left,int right);
 main()
{
int a[20],i,n;
printf("Enter how many elements would you like to enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The array before sorting is:\n");
display(a,n);
quicksort(a,0,n-1);
printf("The array after sorting is:\n");
display(a,n);
}
int a[10],i,n;
void display(int a[],int n)
{
  for(i=0;i<n;i++)
	printf("%d\t",a[i]);
  printf("\n");
}

int partition(int a[],int lb,int ub)
{
	int pivot,start,end,temp;
	pivot=a[lb];
	start=lb+1;
	end=ub;
	do
	{
		while(a[start]<pivot && start <= ub)
			start++;
		while(a[end]>pivot && end > lb)
			end--;
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}while(start<=end);
	a[lb]=a[end];
	a[end]=pivot;
	return end;
}

void quicksort(int x[],int left,int right)
{
  int j;
  if(left<right)
   {
	j=partitio
n(x,left,right);
	quicksort(x,left,j-1);
	quicksort(x,j+1,right);
   }
}


