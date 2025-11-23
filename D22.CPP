// Rotate Array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        // Step 1: Reverse whole array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    k = k % n; // Handle cases where k >= n
    Solution sol;
    sol.rotate(nums, k);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}