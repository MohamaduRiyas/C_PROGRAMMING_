include<stdio.h>
int main()
{
    int len, i, count = 0;

    printf("Enter a string:");
    char a[10];
    scanf("%s", &a);

    len = strlen(a);
    for(i = 0; i < len; ++i){
        if(a[i] == a[len - i -1])
            count ++;
    }
    if(len == count)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}
