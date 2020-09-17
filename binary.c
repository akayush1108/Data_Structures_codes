#include <stdio.h>
int binarySearch(int a[],int n,int data);
int main()
{
    int a[100], i, n,data;
    printf("\nEnter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter data to search: ");
    scanf("%d", &data);
    binarySearch(a,n,data);
    return 0;
}
int binarySearch(int a[],int n,int data)
{	
	int l,r,mid,result;
	l=0;
	r=n-1;
    while(l<=r)
    {
    	mid=(l+r)/2;
    	if(data==a[mid])
		{
			printf("fount at position %d",mid+1);
			return 0;	
		}	
		else if(data<a[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	printf("data not found");
    
}
