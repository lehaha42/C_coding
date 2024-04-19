
#include <stdio.h>
#include <string.h>
#include <math.h>

//календарь
int atoi(char *s);


int days_in_year(int year){
    return 365 + (year % 4 == 0)?1:0;
}



int compare_str(char *s1, char *s2){
    int l = (strlen(s1)<strlen(s2))?strlen(s1):strlen(s2);
    for (int i = 0; i<l; i++){
        if(s1[i] < s2[i]) return -1;
        if(s1[i] > s2[i]) return 1;
    }
    return (strlen(s1)!=strlen(s2))?((strlen(s1)<strlen(s2))?-1:1):0;
}


int year_offset(int year){
    if (year > 2024){
        int offset = 0;
        for (int i = 0; i < year - 2024; i++){
            offset = (offset + days_in_year(2024 + i)) % 7;
        }
        return offset;
    }else{
        int offset = 0;
        for (int i = 0; i < 2024 - year; i++){
            offset = (offset + 7 - days_in_year(2024 - i)) % 7;
        }
        return (offset+7)%7;
    }
}


int days_in_month_of_year(int month, int year){
    int arr[12] = {31, 28 + ((year % 4 == 0)?1:0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return arr[month];
}


int main(){
    char s[100];
    char *days[7] = {"понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресение"};
    char *monthes[12] = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    scanf("%s", s);
    if (compare_str(s, "now") == 0){
        printf("%d.%d.%d, %s", 20, 04, 2024, days[5]);
        return 0;
    }
    int n = 0;
    int p[3];
    for (int i = 0; i<100; i++){
        if (s[i] == '.'){
            p[n] = i;
            n++;
        }
    }
    if (n == 0){
        int year = atoi(s);
        int offset = year_offset(year);
        for (int i = 0; i<12; i++){
            printf(" %s\n пн вт ср чт пт сб вс\n", monthes[i]);
            for(int j = 0; j < offset; j++) printf("   ");
            for(int j = 0; j < days_in_month_of_year(i, year); j++){
                if (((offset + j) % 7 == 0) && (j != 0)){
                    printf("\n %2d", j+1);
                }else{
                    printf(" %2d", j+1);
                }
            }
            printf("\n");
            offset = (offset + days_in_month_of_year(i, year)) % 7;
        }
        return 0;
    }
    if (n == 1){
        char year_c[5];
        strncpy(year_c, s, p[0]);
        int year = atoi(year_c);
        char month_c[3];
        strncpy(month_c, s+p[0]+1, strlen(s)-p[0]);
        int month = atoi(month_c) - 1;
        int offset = year_offset(year);
        printf(" %s\n пн вт ср чт пт сб вс\n", monthes[month]);
        for(int j = 0; j < month; j++) offset  = (offset + days_in_month_of_year(j, year)) % 7;
        for(int j = 0; j < offset; j++) printf("   ");
        for(int j = 0; j < days_in_month_of_year(month, year); j++){
            if (((offset + j) % 7 == 0) && (j != 0)){
                printf("\n %2d", j+1);
            }else{
                printf(" %2d", j+1);
            }
        }
        return 0;
    }
    if (n == 2){
        char year_c[5];
        strncpy(year_c, s, p[0]);
        int year = atoi(year_c);
        char month_c[3];
        strncpy(month_c, s+p[0]+1, p[1]-p[0]);
        int month = atoi(month_c) - 1;
        char day_c[3];
        strncpy(day_c, s+p[1]+1, strlen(s)-p[1]);
        int day = atoi(day_c);
        printf("%d %s %d-го года, %s\n", day, monthes[month], year, days[day%7]);
    }
    return 0;
}
