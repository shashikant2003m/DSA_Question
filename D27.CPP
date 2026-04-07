#include <bits/stdc++.h>
using namespace std;

void vectors(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);

    cout << v[0] << endl;
    cout << v.at(2) << endl;
    cout << v.size() << endl;       // number of elements
    int cap = v.capacity();
    cout << cap << endl;   // allocated memory

    int n = 100;
    for(int i=0; i<n; i++){
        v.push_back(i);
    }
    cout << v.size() << endl;
    cout << v.capacity() << endl;
}

int main(){
    vectors();
}