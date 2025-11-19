// remove duplicate from sorted array
#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int i = 1;
        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[j - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
}


int main(){
    int n;
    cin>>n;
    vector <int> arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> i;`
        arr->push_back(i);
    }

    cout << removeDuplicates(arr[n]);
}