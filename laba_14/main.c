
#include <stdio.h>
#include <setjmp.h>


int main(){
    int a = 1, b = 1, c = 0, n = 0;
    scanf("%d", &n);
    jmp_buf env = {0};
    int val = setjmp(env);
    c = a + b;
    a = b;
    b = c;
    if(val < n - 3) longjmp(env, val + 1);
    printf("%d", c);
    return 0;
}
