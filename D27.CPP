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
    cout << v.capacity() << endl;   // allocated memory
}

int main(){
    vectors();
}