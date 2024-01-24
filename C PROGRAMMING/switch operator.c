// switch operator :)

#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter a two number and a character:");
    scanf("%d %c %d", &a,&c,&b);

    switch(c){
        case '+':
            printf("\nResult is %d",a+b);
            break;
        case '-':
            printf("\nResult is %d",a-b);
            break;
        case '*':
            printf("\nResult is %d",a*b);
            break;
        case '/':
            printf("\nResult is %d",a/b);
            break;
        default :
            printf("\nEnter a valid input");
            }
            return 0;

}
