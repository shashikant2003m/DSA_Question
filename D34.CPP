// two sum problem
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}

//fibonacci series
#include <iostream>
using namespace std;

int main() {
    int n = 10;

    int a = 0, b = 1;

    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";

        a = b;
        b = c;
    }

    return 0;
}
