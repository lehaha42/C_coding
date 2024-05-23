
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void new_sigabrt(int sig){
    printf("Oh no! SIGABRT!");
    exit(1);
}

void new_sigfpe(int sig){
    printf("Oh no! SIGFPE!");
    exit(1);
}

void new_sigill(int sig){
    printf("Oh no! SIGILL!");
    exit(1);
}

void new_sigint(int sig){
    printf("Oh no! SIGINT!");
    exit(1);
}

void new_sigsegv(int sig){
    printf("Oh no! SIGSEGV!");
    exit(1);
}

void new_sigterm(int sig){
    printf("Oh no! SIGTERM!");
    exit(1);
}



int main()
{   
    void (*funcptr)(int);
    
    funcptr = signal (SIGABRT, new_sigabrt);
    if (funcptr == SIG_IGN) signal(SIGABRT, SIG_IGN);
    
    funcptr = signal (SIGFPE, new_sigfpe);
    if (funcptr == SIG_IGN) signal(SIGFPE, SIG_IGN);
    
    funcptr = signal (SIGILL, new_sigill);
    if (funcptr == SIG_IGN) signal(SIGILL, SIG_IGN);
    
    funcptr = signal (SIGINT, new_sigint);
    if (funcptr == SIG_IGN) signal(SIGINT, SIG_IGN);
    
    funcptr = signal (SIGSEGV, new_sigsegv);
    if (funcptr == SIG_IGN) signal(SIGSEGV, SIG_IGN);
    
    funcptr = signal (SIGTERM, new_sigterm);
    if (funcptr == SIG_IGN) signal(SIGTERM, SIG_IGN);
    
    int n;
    scanf("%d", &n);
    raise(n);
    return 0;
}

//SIGABRT, SIGFPE, SIGILL, SIGINT, SIGSEGV, SIGTERM
//6        8       4       2       11       15
