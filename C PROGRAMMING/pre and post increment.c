#include<stdio.h>
int main(){
    int a,b;
    a = 5; //post increment
    b = ++a;
    printf("%d %d", a,b);


    a = 5; // pre increment
    b = a++;
    printf("\n%d %d", a,b);

}
