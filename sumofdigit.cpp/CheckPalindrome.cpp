
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   string str="yashi";
    bool palindrome=true;
    int n=str.length();
    for(int i=0;i<n/2;i--){
        if(str[i]!=str[n-i-1]){
            palindrome=false;
            break;
        }
    }
       if(palindrome)
           cout<<"palindrome";
        else
           cout<<"not a palindrome";
         return 0;
}