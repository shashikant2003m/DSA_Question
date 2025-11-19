// Rotate Array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp[n];
    int d = k;

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[d+1];
        d++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "array is: " << arr[i];
    }
    
    
    
}