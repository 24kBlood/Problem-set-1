#include <stdio.h>

int main() {
    int cents;
    printf("Введите количество центов: ");
    scanf("%d", &cents);
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = (cents % 25 % 10) / 5;
    int pennies = (cents % 25 % 10 % 5);
    printf("Количество монет: %d\n", quarters + dimes + nickels + pennies);
}