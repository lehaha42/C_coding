
#include <stdio.h>
#include <string.h>


struct humen{
    char name[100], sname[100], pol[10];
    int byear, height;
};


int main(){
    FILE *fp1, *fp2;
    /*
    char *s = "abcdefghij";
    fp1 = fopen("input.txt","w");
    for(int i = 0; i<50; i++){
        fprintf(fp1, "%c%c%c %c%c%c 19%d%d %c %d\n", s[rand()%10], s[rand()%10], s[rand()%10], s[rand()%10], s[rand()%10], s[rand()%10], rand()%10, rand()%10,  s[rand()%2], 150+rand()%50);
    }
    fclose(fp1);
    */
    fp1 = fopen("input.txt",  "r");
    fp2 = fopen("output.txt", "w");
    
    struct humen a[100], t;
    char name[100], sname[100], pol[10];
    int byear, height, i=0;
    
    while (fscanf(fp1, "%s %s %d %s %d\n", name, sname, &byear, pol, &height) == 5){
        strcpy(a[i].name, name);
        strcpy(a[i].sname, sname);
        strcpy(a[i].pol, pol);
        a[i].byear = byear;
        a[i].height = height;
        //printf("%d %s %s %s %d %d\n", i, a[i].name, a[i].sname, a[i].pol, a[i].byear, a[i].height);
        i++;
    }
    int N = i;
    int arr[5], choise = 0;
    for(int i = 0; i<5; i++) arr[i] = 0;
    i = 0;
    while(((0 <= choise) && (choise <= 4)) || (i<5)){
        printf("введите 0-4 для выбора колонны для сортировки или -1 для выхода: ");
        scanf("%d", &choise);
        arr[i] = choise;
        i++;
    }
    for(int i = 0; i<N-1; i++){
        for(int j = 0; j<N-i-1; j++){
            for(int k = 0; k<5; k++){
                if(arr[k] == 0) break;
                if()
            }
        }
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}
