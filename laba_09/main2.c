
#include <stdio.h>
#include <math.h>
#include <string.h>

float calc(char *s){
    char s_cpy[100], s_cpy2[100];
    strcpy(s_cpy, s);
    strcpy(s_cpy2, s);
    char signs[100], nums[100][100];
    char *p;
    p = strtok(s_cpy, "0123456789. ");
    int i = 0;
    while(p != NULL){
        if (p[0] == '-') signs[i] = '-';
        else             signs[i] = '+';
        i++;
        p = strtok(NULL, "0123456789. ");
    }
    int Nsigns = i; i = 0;
    p = strtok(s_cpy2, "+- ");
    while(p != NULL){
        strcpy(nums[i], p);
        i++;
        p = strtok(NULL, "+- ");
    }
    int Nnums = i;
    double ans = atof(nums[0]);
    for (i = 1; i < Nnums; i++){
        double n = atof(nums[i]);
        if (signs[i-1] == '-') ans -= n;
        else                 ans += n;
    }
    return ans;
}


int main(){
    float ans = 0.0;
    char inp[100];
    gets(inp);
    printf("%lf", calc(inp));
    return 0;
}
