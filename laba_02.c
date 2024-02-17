#include <math.h>;
#include <stdio.h>;

int main() {
    double x1, x2;
    
    int N;
    
    printf("Vvedite N:");
    scanf("%d", &N);
    
    double arr[N][N];
    
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("Vvedite A[%d][%d]:", i, j);
            scanf("%lf", &arr[i][j]);
        }
    }
    printf("\n");
    
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            printf("%3lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i<N; i++){
        x1+=arr[i][i];
        x2+=arr[i][N-i-1];
    }
    printf("X1 = %lf\nX2 = %lf\n", x1, x2);
    
    int m=1, arr2[2][2], arr3[2][2];
    
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            printf("Vvedite B[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            m=1;
            for (int n = 0; n<2; n++){
                m+=arr2[i][n]*arr2[n][j];
            }
            arr3[i][j]=m;
        }
    }
    
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            printf("%2d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
