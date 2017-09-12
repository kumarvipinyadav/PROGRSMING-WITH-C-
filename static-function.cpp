#include<iostream>
using namespace std ;

class demo
{
   int x = 0 ;
   static int y ;
   public : 
            demo()
            {
                x = 0 ;
                y++ ;
            }
            demo( int g )
            {
                x = g ;
                y++ ;
            }
            static void show ()
            {
                  cout << "This is the static function and y is " << y <<endl;
            }
};

int demo::y ;

main()
{
    demo::show();
    demo a,b,c,d,e;
    demo::show();
}