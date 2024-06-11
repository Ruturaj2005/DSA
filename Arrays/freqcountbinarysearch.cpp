#include<iostream>
using namespace std;

int binarysearch1(int arr[], int n, int key) {
    int result = -1;
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            result = mid;
            e = mid - 1;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return result;
}

int binarysearch2(int arr[], int n, int key) {
    int result = -1;
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            result = mid;
            s = mid + 1;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, key;
    int arr[5] = {1, 2, 2,2,2};
    n = 5;

    cin >> key;

    int firstindex = binarysearch1(arr, n, key);
    int lastindex = binarysearch2(arr, n, key);
    
    if (firstindex == -1 || lastindex == -1) {
        cout << "Frequency of " << key << " is 0" << endl;
    } else {
        int frequency = lastindex - firstindex + 1;
        cout << "Frequency of " << key << " is " << frequency << endl;
    }

    return 0;
}
