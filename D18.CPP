#include <iostream>
#include <vector>
using namespace std;

int function(int arr[], int n, int target){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[i] + arr[j] == target){
                cout << "true";
                return 0;
            }
        }
    }
    
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    function(arr, n, target);
    return 0;

}