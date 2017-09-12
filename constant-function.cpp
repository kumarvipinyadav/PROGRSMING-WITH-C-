#include<iostream>
using namespace std ;

class demo 
{
    mutable int x ;
    int y ;
    public :
            demo()
            {
                x = 67 ;
                y = 76 ;
            }
            void show ( ) const
            {
                cout << x << endl<< y << endl ;
                x = 687 ;   
                cout << x << endl<< y << endl ;
            }
};

main()
{
    demo x ;
    x.show();
    
}