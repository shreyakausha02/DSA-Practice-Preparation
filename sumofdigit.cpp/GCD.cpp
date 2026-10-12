

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout<<"Enter the 1st number: ";
    cin >> a;
    

    cout<<"Enter the 2nd number: ";
      cin >> b;
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << a;

    return 0;
}