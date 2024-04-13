#include <stdio.h>

struct humen{
    char *name, *sname;
    int age;
};

int main(){
    int N = 4;
    struct humen a[N], b[N];
    char name[100], sname[100];
    int age;
    for(int i = 0; i<N; i++){
        printf("введите имя %d-го человека: ", i+1);
        scanf("%s", name);
        printf("введите фамилию %d-го человека: ", i+1);
        scanf("%s", sname);
        printf("введите возраст %d-го человека: ", i+1);
        scanf("%d", &age);
        a[i].name = name;
        a[i].sname = sname;
        a[i].age = age;
    }
    return 0;
}
