#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    int temp = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void exchangeSort(int arr[], int n) {
    int max_j, temp;

    for (int i = n - 1; i > 0; i--) {
        max_j = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[max_j]) {
                max_j = j;
            }
        }
        temp = arr[max_j];
        arr[max_j] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    const int n = 9;
    int arrBubble[n] = { 2, 45, 65, 76, 68, 94, 21, 16, 10 };
    int arrExchange[n] = { 2, 45, 65, 76, 68, 94, 21, 16, 10 };

    // Bubble Sort
    bubbleSort(arrBubble, n);
    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arrBubble[i] << " ";
    }
    cout << endl;

    // Exchange Sort
    exchangeSort(arrExchange, n);
    cout << "Exchange Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arrExchange[i] << " ";
    }
    cout << endl;

    return 0;
}
