#include<stdio.h>

void f1(long  n){
    if (n>0){
        printf(" %d", n%10);
        f1(n/10);
    }
}

void f2(long long n){
    if (n>0){
        f2(n/10);
        printf(" %d", n%10);
    }
}

int main()
{
    f1(4286);
    printf("\n");
    f2(7392);
    return 0;
}
