
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int base,exponent;
    cout<<"Enter the base: ";
    
    cin>>base;
           cout<<"Enter the exponent: ";
       cin >>exponent;
    long long result=1;
  
    for(int i=1;i<=exponent;i++){
        result=base*result;
    }

  cout<< "result: "<<result;
        
    return 0;
}