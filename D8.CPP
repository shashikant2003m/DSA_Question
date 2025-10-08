// Print name n times using recursion
#include <iostream>
using namespace std;

void f(int i, int n) {
    if(i>n) {
        return;
    }

    cout << "Raj ";
    f(i+1, n);
}

int main() {
    int n;
    cin >> n;
    f(1, n);
}