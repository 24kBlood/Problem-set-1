#include <stdio.h>

int main() {
    printf("Введите ваше имя: ");
    char name[50];
    scanf("%s", name);
    printf("Привет, %s!\n", name);
    return 0;
}