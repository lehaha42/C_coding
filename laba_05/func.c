
#include <stdio.h>
#include <stdlib.h>

double** calc(int n, double **arr1, double **arr2, char c){
    double **arr;
    
    arr = (double**)malloc(n*sizeof(double*));
    for (int i = 0; i<n; i++) arr[i] = (double*)malloc(n*sizeof(double));
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            arr[i][j] = 0.0;
        }
    }
    
    return arr;
}
