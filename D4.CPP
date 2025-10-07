// Program to check armstrong number
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int original = n; 
    int final = 0;

    while (n > 0) {
        int temp = n % 10;
        final += pow(temp, 3);
        n /= 10;
    }

    if (final == original) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
