#include <stdio.h>

int main() {
    int n;
    printf("Введите высоту пирамиды: ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        for (int a = 0; a < n - i; a++){
            printf(" ");
        }
        for (int b = 0; b < 2 * i - 1; b++){
            printf("#");
        }
        printf("\n");
    }
}