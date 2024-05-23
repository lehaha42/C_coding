
#include <stdio.h>
#include <signal.h>





int main()
{
    int n;
    scanf("%d", &n);
    raise(n);
    return 0;
}

//SIGABRT, SIGFPE, SIGILL, SIGINT, SIGSEGV, SIGTERM
//6        8       4       2       11       15
