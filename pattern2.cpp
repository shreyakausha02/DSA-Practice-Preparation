
#include <iostream>
using namespace std;
int main()
{
    for( int i=0;i<6;i++)
    {   char ch='A';
        for(int j=0;j<6;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}