#include <stdio.h>
int main()
{
    int a[10], i, data,n;
    printf("\nEnter number of elements of an array:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter data to search: ");
    scanf("%d", &data);
    for (i=0; i<n; i++)
        if (a[i]==data)
        {
            printf("\ndata found at index %d", i+1);
            break;
        }
    if (i>=n)
        printf("\ndata not found");
    return 0;
    
}
