#include<iostream>
using namespace std;
int main()
{
    int a=2;
    try
    {
        if (a==1)
            throw a;
        else if (a==2)
            throw 'A';
    }
    catch(int a)
    {
        cout<<"Integer exception caught\n";
    }
    catch(char b)
    {
        cout<<"Character exception caught\n";
    }
    cout<<"\nEnd of The program\n";
}
