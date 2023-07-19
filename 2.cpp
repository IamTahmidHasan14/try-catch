#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int a[10],counter=0;
    cout<<"Enter 10 Integer Numbers: "      ;
    try
    {
        for(int i=1;i<=10;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            counter++;
        }
        if (counter>=5)
            throw 4.55;
        else
            cout <<"\nOkay";
    }
    catch(double a)
    {
        cout<<"\nYou have entered too many odd numbers.";
    }
getch();
}
