#include <stdio.h>

int popcount_double(double a){
    int n = 0;
    int *p = &a;
    char s = 0;
    for(int i = 0; i<8; i++){s = *(&p+i);
        while(s!=0){
            s = s&(s-1);
            n++;
        }
    }
    return n;
}


int popcount_long(long long a){
    int n = 0;
    while(a!=0){
        a = a&(a-1);
        n++;
    }
    return n;
}


int main(){
    double a;
    scanf("%lf", &a);
    printf("%d\n", popcount_double(a));
    long long b;
    scanf("%ld", &b);
    printf("%d\n", popcount_long(b));
    return 0;
}
