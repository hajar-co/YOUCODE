#include <stdio.h>

int main(){
    int a, b;
    printf("entre la valeur a: ");
    scanf("%d", &a);
    printf("entre la valeur b: ");
    scanf("%d", &b);
    printf("a+b= %d\n", a+b);
    printf("a-b= %d\n", a-b);
    printf("a*b= %d\n", a*b);
    printf("a/b= %f\n", (float)a/b);
    printf("a%%b= %d\n", a%b );
    return 0;
    }