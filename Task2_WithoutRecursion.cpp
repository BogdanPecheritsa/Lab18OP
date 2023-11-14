#include <stdio.h>
#include <windows.h>

int findMaxWithoutRecursion(int arr[], int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    printf("Введіть розмір масиву: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Розмір масиву повинен бути додатнім числом.\n");
        return 1;
    }

    int arr[100];

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    int maxElement = findMaxWithoutRecursion(arr, n);

    printf("Максимальний елемент масиву: %d\n", maxElement);

    return 0;
}

int findMaxWithoutRecursion(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}