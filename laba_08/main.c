
#include <stdio.h>
#include <string.h>


struct humen{
    char name[100], sname[100], pol[10];
    int byear, height;
};


int compare_str(char *s1, char *s2){
    int l = (strlen(s1)<strlen(s2))?strlen(s1):strlen(s2);
    for (int i = 0; i<l; i++){
        if(s1[i] < s2[i]) return -1;
        if(s1[i] > s2[i]) return 1;
    }
    return (strlen(s1)!=strlen(s2))?((strlen(s1)<strlen(s2))?-1:1):0;
}


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
    struct humen a[1000], t;
    char name[100], sname[100], pol[10];
    int byear, height, i=0;
    while (fscanf(fp1, "%s %s %d %s %d\n", name, sname, &byear, pol, &height) == 5){
        strcpy(a[i].name, name);
        strcpy(a[i].sname, sname);
        strcpy(a[i].pol, pol);
        a[i].byear = byear;
        a[i].height = height;
        i++;
    }
    int N = i;
    int arr[5] = {-1, -1, -1, -1, -1}, choise = 0;
    i = 0;
    while((0 <= choise) && (choise <= 4) && (i<5)){
        printf("введите 0-4 для выбора колонны для сортировки или -1 для выхода: ");
        scanf("%d", &choise);
        arr[i] = choise;
        i++;
    }
    for(int i = 0; i<N-1; i++){
        for(int j = 0; j<N-i-1; j++){
            for(int k = 0; k<5; k++){
                if((4 < arr[k]) || (arr[k] < 0)) break;
                if(arr[k] == 0){
                    int compare = compare_str(a[j].name, a[j+1].name);
                    if(compare == -1) break;
                    if(compare == 0) continue;
                    t = a[j]; a[j] = a[j+1]; a[j+1] = t; break;
                }
                if(arr[k] == 1){
                    int compare = compare_str(a[j].sname, a[j+1].sname);
                    if(compare == -1) break;
                    if(compare == 0) continue;
                    t = a[j]; a[j] = a[j+1]; a[j+1] = t; break;
                }
                if(arr[k] == 2){
                        if(a[j].byear < a[j+1].byear) break;
                        if(a[j].byear == a[j+1].byear) continue;
                    t = a[j]; a[j] = a[j+1]; a[j+1] = t; break;
                }
                if(arr[k] == 3){
                    int compare = compare_str(a[j].pol, a[j+1].pol);
                    if(compare == -1) break;
                    if(compare == 0) continue;
                    t = a[j]; a[j] = a[j+1]; a[j+1] = t; break;
                }
                if(arr[k] == 4){
                    if(a[j].height < a[j+1].height) break;
                    if(a[j].height == a[j+1].height) continue;
                    t = a[j]; a[j] = a[j+1]; a[j+1] = t; break;
                }
            }
        }
    }
    for (int i = 0; i<N; i++) fprintf(fp2, "%s %s %d %s %d\n", a[i].name, a[i].sname, a[i].byear, a[i].pol, a[i].height);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
