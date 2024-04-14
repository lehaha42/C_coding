
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
    int choise = 0;
    i = 0;
    while((choise != -1) || (i<5)){
        scanf("%d", &choise);
        i++;
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}
