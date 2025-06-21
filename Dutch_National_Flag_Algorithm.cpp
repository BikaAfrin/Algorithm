#include <bits/stdc++.h>
using namespace std;

void DNF(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { 
                swap(nums[mid], nums[high]);
                high--;
            }
        }
  
        cout << "Sorted array: ";
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (only 0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
  
    DNF(nums);

    return 0;
}
