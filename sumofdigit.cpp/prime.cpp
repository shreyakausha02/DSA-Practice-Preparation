

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   int count=0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%n==0){
            count++;
        }
        }
    if(count==2)
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
        
    return 0;
}