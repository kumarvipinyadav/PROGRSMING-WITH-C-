#include<iostream>
using namespace std ;

class test 
{
    
             int x ;
             static int y ;
    public :         
    test ()
    {
        x = 0 ;
        y++ ;
    }
    test (int a )
    {
        x = a ;
        y++ ;
    }
    test ( test &p )
    {
        p.x = x ;
        y++;
    }

    void output ()
    {
        cout << y << endl;
    }
};

int test::y ;

main()
{
   test a,b(56);
   test c = b ; 

   a.output();
   b.output();
   c.output();
}