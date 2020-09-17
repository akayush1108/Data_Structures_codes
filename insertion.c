#include <stdio.h>

int main()
{
    int a[5], pos, i, size, num;
    
    printf("Enter size of array\n");
    scanf("%d", &size);
    
    printf("Enter element of array\n" );
    
    for (i = 0; i <size; i++)    
    scanf("%d", &a[i]);
    
    printf("enter position\n");
    scanf("%d", &pos);
    
    printf("enter data you want to insert\n");
    scanf("%d", &num);
    
    if(pos<=0 || pos>size+1)
    {
    	printf("invalid position");
	}
    
    else
    {
    for (i = size - 1; i >= pos - 1; i--)    
	a[i+1] = a[i];
    
    a[pos-1] = num;
	
	printf("Resultant array is\n");
    
    for (i = 0; i <=size; i++)    
	printf("%d\n", a[i]);    
    
    return 0;
	}
    
}
