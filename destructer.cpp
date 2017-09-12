#include<iostream>
using namespace std ;

class rectional 
{
    int num,den ;

    public :
            rectional()
            {
              cout << "CONSTRUCTION of class " << endl ;
            }
            ~rectional()
            {
                cout << "DESTRUCTER of class" << endl ;
            }
};
main ()
{
    rectional a,b ;
         {
             rectional c,d ;
         }
    rectional e,f;     
}