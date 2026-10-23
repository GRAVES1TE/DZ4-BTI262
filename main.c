#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int A, B;
    printf("Введите номер рабочего места Анны и Бориса: ");
    if (scanf("%d %d", &A, &B) != 2) {
        printf("Ошибка ввода!\n");
        return 1;
    }
    int condition = (A % 2 == 0) ^ (B % 2 == 0);
    printf("Пьём кофе? (1 - да, 0 - нет): %d\n", condition);
    return 0;
}

