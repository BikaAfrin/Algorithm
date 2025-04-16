#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {1, 1, 2, 2, 3, 3, 3};

    // Remove duplicates (only works properly on sorted arrays)
    int* it = unique(arr, arr + 7);

    // Number of unique elements
    int count = distance(arr, it);

    // Print the unique elements 1 2 3
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }

    //Total unique elements: 3
    cout << "\nTotal unique elements: " << count << endl; 

    return 0;
}
