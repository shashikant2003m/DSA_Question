#include <bits/stdc++.h>
using namespace std;

int f(int cnt) {
    if(cnt == 5) {
        return 0;
    }
    cout << cnt << endl;
    cnt++;
    f(cnt);
}

int main() {
    int cnt = 0;
    f(cnt);
}