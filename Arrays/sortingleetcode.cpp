#include<iostream>
using namespace std;

int main() {
    int arr[5] = {0, 2, 1, 2, 0};
    int n = 5;

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}