#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int top,size;
    int *arr;
};


int isfull(struct stack* ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
        return 0;
}


int isempty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
        return 0;
}


int push(struct stack *ptr,int val)
{
    if(isfull(ptr))
    {
        printf("overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }

}


int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("Underflow");
        return -1;
    }

    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int peek(struct stack *ptr)
{
    ptr->top+1;
    return ptr->arr[ptr->top];

}

void display(struct stack *ptr)
{
    int i;
    printf("[");

    for(i=0;i<=ptr->top;i++)
    {
        printf(" %d  ",ptr->arr[i]);
    }
    printf("\n");
}



int main()
{
    struct stack *s1=(struct stack *)malloc(sizeof(struct stack));
    s1->size=80;
    s1->top=-1;
    s1->arr=(int *) malloc(s1->size * sizeof(int));
    int val,n,a;
  l0:  printf("SELECT YOUR CHOICE \n 1: push n elements \n 2: pop \n 3: peek \n 4: isFull \n 5: isEmpty \n 6: Display \n Enter here :");
    l1 : scanf("%d",&a);
    switch(a)
    {
    case 1:
    {
        printf("Enter the number of elements : ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&val);
            push(s1,val);
        }
        break;
    }
    case 2:
        {
            printf("Element popped :%d\n",pop(s1));
            break;
        }
    case 3:
        {
            printf(" top element %d\n",peek(s1));
            break;
        }
    case 4:
        {
            if(isfull(s1)==1)
            {
                printf("Stack full\n");
            }
            else
                 printf("Stack not full\n");
            break;
        }
    case 5:
        {
            if(isempty(s1)==1)
            {
                printf("Stack Empty\n");
            }
            else
                printf("Stack is not Empty\n");
            break;


        }
    case 6:
        {
            display(s1);
            break;
        }
    default:
        {
            printf("Wrong input\n Try Again : ");

            goto l1;
        }


    }

    char ch;
    fflush(stdin);
    l3: printf("Want to enter again Y/N : \n");
     scanf("%c",&ch);
     if(ch=='Y'||ch=='y')
        goto l0;
     else if(ch=='N'||ch=='n')
      printf(" Thank You ");
      else
        goto l3;



    return 0;
}

