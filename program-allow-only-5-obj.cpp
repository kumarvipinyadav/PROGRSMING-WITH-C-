#include<iostream>
#include<stdlib.h>
using namespace std ;

class test 
{
    static int x ;
    public :
            test()
            {
                x++;
                if( x >= 6)
                {
                    cout << "Sorry the progrem is going to be terminated becausse you make 6 object";
                    cout << "...............................\n.........................................................\n........" ;
                    exit(1);
                }                
                cout << " This is the constructer   "<< x << endl ;
            }
            test (int a)
            {
              cout << "This is perameaterised constructer" << endl ;
            }
            test ( test &s )
            {
                cout << "This is copy constructer" << endl ;
            }
            ~test()
            {
                x--;
            }
};

int test::x;

main()
{
    test a ;
    
    {
    test a ;
    test b ;
    test c ;
    test f ;
    }
    test b ;
    test c ;
    test d ;
    test e ;
     cout << "Now it's 6th object" << endl;
    test f ;
}