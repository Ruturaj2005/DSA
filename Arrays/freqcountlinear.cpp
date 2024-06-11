#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 1, 1, 2, 2};
    int n = 5;
    
    for(int i = 0; i < n; ) {
        int count = 1;
        int number = arr[i];

        for(int j = i + 1; j < n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            } else {
                break;
            }
        }

        cout << count << " " << number << endl;

        i += count;
    }

    return 0;
}