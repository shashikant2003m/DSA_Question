// Searching
#include <iostream>
using namespace std;

int search(int arr[], int n, int target){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> target;

    int result = search(arr, n, target);
    if(result != -1){
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found";
    }
}