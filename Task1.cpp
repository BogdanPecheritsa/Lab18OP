#include <stdio.h>
#include <windows.h>

int findMin(int arr[], int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    printf("������ ����� ������: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("����� ������ ������� ���� ������� ������.\n");
        return 1;
    }

    int arr[100];

    printf("������ �������� ������:\n");
    for (int i = 0; i < n; i++) {
        printf("������� %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    int minElement = findMin(arr, n);

    printf("̳�������� ������� ������: %d\n", minElement);

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