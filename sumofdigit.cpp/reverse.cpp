

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=153;
   int reverse=0;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    cout << "palindrome: "<<reverse;
    return 0;
}