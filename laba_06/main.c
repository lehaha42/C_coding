
#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp1, *fp2;
    /*
    fp1 = fopen("input.txt", "w");
    char s[10] = "abcdefghij";
    char s2[10] = "0123456789";
    
    for(int i = 0; i<2000; i++){
        fprintf(fp1, "%c%c %c%c %c%c 19%c%c\n", s[rand()%10],s[rand()%10],s[rand()%10],s[rand()%10],s[rand()%10],s[rand()%10],s2[rand()%10],s2[rand()%10]);
    }
    */
    printf(" %d",atoi("12"));
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    char *s;
    
    while (fgets(s, 15, fp1)){
        char *s2;
        strncpy(s2, strlen(s)-5, 4);
        if(atoi(s2) > 1980){
            fprintf(fp2, "%*s", s);
        }
    }
    
    

    return 0;
}
