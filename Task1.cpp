#include <stdio.h>
#include <windows.h>

int findMin(int arr[], int n);

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

    int minElement = findMin(arr, n);

    printf("Мінімальний елемент масиву: %d\n", minElement);

    return 0;
}

int findMin(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    else {
        int minInRest = findMin(arr + 1, n - 1);
        return (arr[0] < minInRest) ? arr[0] : minInRest;
    }
}