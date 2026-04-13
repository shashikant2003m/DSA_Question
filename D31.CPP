#include <bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cout << "Enter a number : ";
    cin >> p;
    int n = p;
    int temp = 0;
    while (n > 0)
    {
        int t = n %10;
        temp = temp * 10 + t;
        n = n / 10;
    }

    cout << "Result : " << temp << endl;

    if(p == temp){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    
}