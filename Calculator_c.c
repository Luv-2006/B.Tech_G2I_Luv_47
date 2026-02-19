#include <stdio.h>
int main()
{
    int a,b,r;
    char c;
    printf("Enter the values of operand ");
    scanf("%d %d",&a,&b);
    printf("Enter the type of operator");
    scanf (" %c",&c);
    switch(c)
    {
        case '+': r=a+b;
        printf("Addition %d",r);
        break;
        case '-': r=a-b;
        printf("Addition %d",r);
        break;
        case '*': r=a*b;
        printf("Addition %d",r);
        break;
        case '/': r=a/b;
        printf("Addition %d",r);
        break;
        default: printf("Invalid operator \n");

    }
    return 0;
}