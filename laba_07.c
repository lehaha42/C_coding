#include <stdio.h>


typedef struct humen{
  char *firstName, *secondName;
  int age;
} HUMEN;

int main()
{
  int N = 2;
  HUMEN a[N], b[N];

  for (int i = 0; i<N; i++){
    char s1[80], s2[80];
    for (int j = 0; j<80; j++){
      s1[i] = ' ';
      s2[i] = ' ';
    }
    int age;
    printf("введите имя: ");
    scanf(" %s", s1);
    printf("введите фамилию: ");
    scanf(" %s", s2);
    printf("введите возраст: ");
    scanf(" %d", &age);
    a[i].firstName = s1;
    a[i].secondName = s2;
    a[i].age = age;
  }

  printf("\n");

  for (int i = 0; i<N; i++){
    printf(" %s %s, %d лет\n", a[i].firstName, a[i].secondName, a[i].age);
  }

  return 0;
}
