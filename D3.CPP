// Check for Palindrome
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int dup = n;
    int rev = 0;

    while (n > 0)
    {
        int temp = n % 10;
        rev = (rev * 10) + temp;
        n = n / 10;
    }

    if (dup == rev)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    
    
}
