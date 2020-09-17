#include <stdio.h>

int main()
{
    int a[5], pos, i, size, num;
    
    printf("Enter size of array\n");
    scanf("%d", &size);
    
    printf("Enter element of array\n" );
    
    for (i = 0; i <size; i++)    
    scanf("%d", &a[i]);
    
    printf("from what position you want to delete\n");
    scanf("%d", &pos);
    
    if(pos<=0 || pos>size)
    {
    	printf("invalid position\n");
	}
    
    else
    {
    for (i = pos - 1; i < size - 1; i++)    
	a[i] = a[i+1];
	size--;
	
	printf("Resultant array is\n");
    
    for (i = 0; i <size; i++)    
	printf("%d\n", a[i]);    
    
    return 0;
	}
    
}
