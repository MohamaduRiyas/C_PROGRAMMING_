#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\nThese are vowels");
        break;
    default:
       printf("\nThese are consonents");
       break;


    }

    return 0;
}
