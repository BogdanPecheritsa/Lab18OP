#include <stdio.h>
#include <math.h>
#include <windows.h>

double calculatePower(double x, int N);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    int N;

    printf("¬вед≥ть x: ");
    scanf_s("%lf", &x);

    printf("¬вед≥ть N: ");
    scanf_s("%d", &N);

    double result = calculatePower(x, N);

    printf("–езультат: %lf\n", result);

    return 0;
}

double calculatePower(double x, int N) {
    if (N == 0) {
        return 1.0;
    }
    else if (N % 2 == 0) {
        double temp = calculatePower(x, N / 2);
        return temp * temp;
    }
    else {
        return x * calculatePower(x, N - 1);
    }
}