// Program to reverse a number
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int revNum = 0;
    while(n > 0) {
        int temp = n % 10;
        revNum = (revNum * 10) + temp;
        n = n / 10;
    }
    cout << "The reversed of" << n << " is " << revNum;
}
