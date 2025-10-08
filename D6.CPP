// Check gcd
#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int greatest = (n1 < n2) ? n1 : n2;
    int gcd;

    for (int i = 1; i <= greatest; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD is " << gcd;
    
}