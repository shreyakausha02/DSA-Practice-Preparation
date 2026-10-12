
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[]={4,6,7,9,10};
    int n=5;
    int actual=0;
    int expected=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        actual=actual+arr[i];
    }
    int missing=expected-actual;
    cout << "Missing value: " << missing;
    return 0;
}