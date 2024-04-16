#include <stdarg.h>


int sum(int n, ...){
    int result = 0;
    va_list factor;
    va_start(factor, n);
    for(int i=0;i<n; i++) result += va_arg(factor, int);
    va_end(factor);
    return result;
}


int max(int n, ...){
    va_list factor;
    va_start(factor, n);
    int result = va_arg(factor, int), cur;
    for(int i=0;i<n-1; i++) if(result < (cur = va_arg(factor, int))) result = cur;
    return result;
}


int min(int n, ...){
    va_list factor;
    va_start(factor, n);
    int result = va_arg(factor, int), cur;
    for(int i=0;i<n-1; i++) if(result > (cur = va_arg(factor, int))) result = cur;
    return result;
}


int avg(int n, ...){
    int result = 0;
    va_list factor;
    va_start(factor, n);
    for(int i=0;i<n; i++) result += va_arg(factor, int);
    va_end(factor);
    return result / n;
}
