

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={50,20,40,90,10};
    int n=5;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]>max)
           max=arr[i];
       if(arr[i]<min)
           min=arr[i];
        }
    
       cout<<"Maximum number: "<<max<<endl;
       cout<<"Minimum number: "<<min;
       
    return 0;
}