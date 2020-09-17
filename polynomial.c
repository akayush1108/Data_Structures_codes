#include<stdio.h>
int main()
{

    int i,a[20],b[20],c[20],x=0,y=0,n;
    printf("Enter the maximum degree of first polynomial :");
    scanf("%d",&x);
    for(i=x;i>=0;i--)
    {
    	printf("Enter the coefficient of x^%d :",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the maximum degree of second polynomial :");
    scanf("%d",&y);
    for(i=y;i>=0;i--)
    {
    	printf("Enter the coefficient of x^%d :",i);
        scanf("%d",&b[i]);
    }
    if (x>y)
    {
    for(i=x;i>=0;i--)
    {
        c[i]=a[i]+b[i];
    }
    n=x;

    }

    else if (y>x)
    {
        for(i=0;i<=y;i++)
        {
            c[i]=a[i]+b[i];
        }
        n=y;

    }

    else if(x==y)
        {
            for(i=0;i<=x;i++)
            {
                c[i]=a[i]+b[i];
            }
            n=x;
        }
    printf("F(x) =")
    for(i=n;i>=1;i--)
    {
        printf("%dx^%d + ",c[i],i);
    }
printf("%dx^%d",c[i],i);

    return 0;
}
