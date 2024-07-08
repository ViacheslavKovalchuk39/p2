#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int p;
    printf("Введіть кількість чисел: ");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("Кількість чисел повинна бути в діапазоні від 2 до 20.\n");
        return 1;
    }

    int numbers[p];
    printf("Введіть числа: ");
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне: %d\n", result);
    return 0;

}

