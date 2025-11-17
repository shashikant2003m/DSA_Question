// remove duplicate from sorted array
#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int> arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1])
        {
            return 5;
        }
        
    }
    
}

int main(){
    int n;
    cin>>n;
    vector <int> arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> i;
        arr->push_back(i);
    }

    cout << fun(arr, n);
}