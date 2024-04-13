#include <math.h>;
#include <stdio.h>;

int main() {
    char str[80];
    for (int i = 0; i<80; i++){
        str[i]=26;
    }
    gets(str);
    int i = 0;
    while (i<80 && str[i+1]!=26){
        if (str[i] == 'a'){
            printf("A");
        }else if (str[i] == 'b'){
            printf("B");
        }else
            printf("%c", str[i]);
        i++;
    }
    return 0;
}
