// Factorial of N numbers
#include <iostream>
using namespace std;

void f(int i, int s) {
    if (i < 1)
    {
        cout << s;
        return;
    }

    f(i-1, s*i);
}

int main(){
    int n;
    cin >> n;

    f(n, 1);
    
}
