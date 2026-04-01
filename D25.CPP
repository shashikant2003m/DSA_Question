#include <bits/stdc++.h>
using namespace std;

void pattern(string s){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << s << " ";
        }
        cout << endl ;
    }
}

int main(){
    string s = "*";
    pattern(s);
    return 0;
}