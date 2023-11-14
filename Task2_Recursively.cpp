#include <stdio.h>
#include <windows.h>

int findMaxRecursively(int arr[], int start, int end);

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

    int maxElement = findMaxRecursively(arr, 0, n - 1);

    printf("Максимальний елемент масиву: %d\n", maxElement);

    return 0;
}

int findMaxRecursively(int arr[], int start, int end) {
    if (start == end) {
        return arr[start];
    }
    else {
        int mid = (start + end) / 2;
        int maxInFirstHalf = findMaxRecursively(arr, start, mid);
        int maxInSecondHalf = findMaxRecursively(arr, mid + 1, end);
        return (maxInFirstHalf > maxInSecondHalf) ? maxInFirstHalf : maxInSecondHalf;
    }
}