
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=153;
   int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }

    cout << "sum: "<<sum;
    return 0;
}