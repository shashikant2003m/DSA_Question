#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i].first == arr[i].second){
            cout << "Square" << endl;
        }
        else{
            cout << "Rectangle" << endl;
        }
    }
}
