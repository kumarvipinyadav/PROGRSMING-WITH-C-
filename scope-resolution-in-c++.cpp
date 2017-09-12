#include<iostream>
using namespace std;

int x = 25 ;
main()
{
    int x ;
    x = 50 ;
    cout << "Value of x in scope or in main is ->  " << x << endl;

    cout << "Value of x out of scope or out of main is ->  " << ::x ;
}