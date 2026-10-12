
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[]={5,6,10,9,10,9,10};
    int n=7;
    int index=0;
    
    for(int i=0;i<n;i++){
          for(int j=i+1;i<n;i++){
              if(arr[i]==arr[j]){
                 cout<< "First repeating element: "<<arr[i]; 
                  return 0;
      }
        
    }
}
 
    cout << "No repeating element ";
    return 0;
}