#include <iostream>
using namespace std;

int linearsearch(int arr[], int n) {
    int maxRepeat = 0; 
    int number = -1; 
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxRepeat) {
            maxRepeat = count; 
            number = arr[i];
        }
    }
    return number;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 2, 1, 2};
    int n = 7;
    int result = linearsearch(arr, n);
    cout << "Number repeated the maximum times: " << result << endl;
}