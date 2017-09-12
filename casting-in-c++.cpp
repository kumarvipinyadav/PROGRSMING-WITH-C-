#include<iostream>
using namespace std;

main()
{
    int x ,y;
    float d ;
    
    cout << "Enter value of x and y " ;
    cin >> x >> y ;

    d = x/y ;

    cout << " value of d before casting   " << d << endl ;
    
    d = float(x)/y ; 

    cout << " value of d after casting   " << d << endl ;

    d = x/double(y) ; 

    cout << " value of d after casting   " << d << endl ;
    

}