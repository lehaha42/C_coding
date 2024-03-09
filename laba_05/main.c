
#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int n;
    char str[80];
    double **arr1, **arr2, **ans;
    
    printf("введите N: ");
    scanf("%d", &n);
    
    arr1 = (double**)malloc(n*sizeof(double*));
    for (int i = 0; i<n; i++) arr1[i] = (double*)malloc(n*sizeof(double));
    
    arr2 = (double**)malloc(n*sizeof(double*));
    for (int i = 0; i<n; i++) arr2[i] = (double*)malloc(n*sizeof(double));
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("введите A[%d][%d]: ", i, j);
            scanf("%lf", &arr1[i][j]);
        }
    }
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("введите B[%d][%d]: ", i, j);
            scanf("%lf", &arr2[i][j]);
        }
    }
    for (int i = 0; i<80; i++) str[i] = 26;
    printf("введите '+', '-' или '*': ");
    scanf("%s", str);
    
    printf("\n");
    
    ans = calc(n, arr1, arr2, str[0]);
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("%4d ", (int)ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
