#include<iostream>
using namespace std ;

main()
{
    int a,b,c,d[5]={10,15,54,34};

    a = 20 ,b = 25 ,c = 30 ;

    int &p = a , (&q)[5] = d;

    cout << "Value of a is " << p << endl;

    p = 35 ;
    cout << "Value of a is " << p << endl;

    p = c;
    cout << "Value of a is " << p << endl;

    a = b;
    cout << "Value of a is " << p << endl;

    for (int i = 0 ; i <= 4 ; i++ )
        printf("%d\t",q[i]);

}