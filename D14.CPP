// Fibonacci number
#include <iostream>
using namespace std;

void f(int i, int n){
    while (n < 0){
        return;
    }
    n = n+i;
    f(i+1, n-1);
}

int main(){
    int n;
    cin >> n;
    f(0, n);
    cout << n;
}