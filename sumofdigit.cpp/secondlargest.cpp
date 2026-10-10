
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[]={30,48,29,49,59};
    int largest=arr[0];
    int second=arr[0];
    int n=5;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
            second=arr[i];
        }
        
    }
    cout<<second;
 
    return 0;
}