
#include <stdio.h>
#include <math.h>


float calc(char *s){
    double ans = 0.0, cur = 0.0;
    int is_float = 0, neg = 0, fl_dij = 0;
    for (int i = 0; i<strlen(s); i++){
        char c = s[i];
        if (c == '-'){
            if (neg == 1){
                ans -= cur;
            }else{
                ans += cur;
            }
            neg = 1;
			is_float = 0;
			fl_dij = 0;
			cur = 0;
        }
        if (c == '+'){
            if (neg == 1){
				ans -= cur;
			}else{
				ans += cur;
            }
			neg = 0;
			is_float = 0;
			fl_dij = 0;
			cur = 0;
        }
        if (c == '.'){
            is_float = 1;
        }
        if (strchr("0123456789", c)){
            int d = c - '0';
            if (is_float == 1){
				fl_dij += 1;
				cur+=(float)d*pow(10, -fl_dij);
			}else{
				cur*=10;
				cur+=d;
            }
        }
        
    }
    if (neg == 1){
		ans -= cur;
	}else{
		ans += cur;
    }
    return ans;
}


int main(){
    float ans = 0.0;
    char inp[100];
    scanf("%s", inp);
    printf("%lf", calc(inp));
    return 0;
}
