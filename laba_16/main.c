
#include <stdio.h>
#define ISBIT(a, n) ((1<<n)&a)?1:0

int popcount(long a){
    int n = 0;
    for (int i = 0; i<32; i++){
        n+=ISBIT((long long)a, i);
    }
    return n;
}


int main(){
    long a;
    scanf("%ld", &a);
    printf(" %d\n", popcount(a));
    return 0;
}
