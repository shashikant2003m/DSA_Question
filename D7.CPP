// Program to check prime number
#include <iostream>
using namespace std;

int main ()
{
    int n; 
    cout << "Enter the number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Invalid";
    }

    if (n == 1 || n == 2 || n == 3)
    {
        cout << "Prime";
    }

    bool isPrime = true;

    if (n > 3)
    {
        for (int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
            }
        }
    }

    if (isPrime == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Non Prime";
    }
}