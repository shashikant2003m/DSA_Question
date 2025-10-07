// Program to count the digit of a number
#include <iostream>
using namespace std;

int countdigit(int number) {

   int cnt = 0;
   while (number > 0) {
      cnt += 1;
      number /= 10;
   }

   return cnt;

}

int main() {
   int n;
   cout << "Enter the number: ";
   cin >> n;

   int printdigit = countdigit(n);

   cout << "The total number is " << printdigit;
}
