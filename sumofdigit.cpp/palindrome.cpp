
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=77;
    int original=n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(sum==original)
      cout << "palindrome ";
    else
     cout<< "not a palindrome";
    return 0;
}