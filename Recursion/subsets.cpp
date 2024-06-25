#include <iostream>
#include <vector>
using namespace std;

void sum(int arr[], int l, int r, vector<vector<int>>& ans, vector<int> output) {
    if (l > r) { // Base condition to handle the end of recursion
        ans.push_back(output);
        return;
    }
    
    // Exclude the current element and recurse
    sum(arr, l + 1, r, ans, output);
    
    // Include the current element and recurse
    output.push_back(arr[l]);
    sum(arr, l + 1, r, ans, output);
}

int main() {
    int arr[5] = {1, 3, 2, 9, 4};
    int n = 5;
    vector<vector<int>> ans;
    vector<int> output;
    sum(arr, 0, n - 1, ans, output);
    
    // Print all subsets
    for (const auto& subset : ans) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}