
// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[]={0,6,0,9,10};
    int n=5;
    int index=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
    }
}
    while(index<n){
        arr[index]=0;
         index++;
    }
    for(int i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}