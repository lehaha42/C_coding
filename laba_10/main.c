
#include <stdio.h>


#define MAX(n, arr) ({int max = (arr)[0]; for (int i = 1; i < n; i++) if (max < (arr)[i]) max = (arr)[i]; max;})
#define MID(n, arr) ({int sum = (arr)[0]; for (int i = 1; i < n; i++) sum += (arr)[i]; (double)sum / (double)n;})

int main()
{   
    int arr[] = {7, 55555, 44444444};
    printf("%lf", MID(3, arr));

    return 0;
}
