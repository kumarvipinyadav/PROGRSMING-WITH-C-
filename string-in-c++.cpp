#include<iostream>
using namespace std ;
main()
{
    char x[20];

    cout << "Enter a string : ";
    cin >> x;
    cout << "Enterd string is  " << x ;


    cout << "Enter a string : ";
    cin.read(x,6);
    cout.write(x,3) << endl;

    cout << "Enter a string : ";
    cin.getline(x,10) >> x ;
    cout << "Enterd string is  " << x ;

    cout << "Enter a string : ";
    cin.getline(x,8,'%');
    cout << "Enterd string is  " << x ;

}