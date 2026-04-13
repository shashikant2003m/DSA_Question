#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // Output: 10
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Output: 20
    cout << "Queue size: " << q.size() << endl; // Output: 2
}