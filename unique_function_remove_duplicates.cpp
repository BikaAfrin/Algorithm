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


It removes consecutive duplicate elements in-place.

It keeps the first occurrence of each element and shifts the rest to the front.

It returns an iterator (pointer) to the element just after the last unique element — which in this example is at index 3.
