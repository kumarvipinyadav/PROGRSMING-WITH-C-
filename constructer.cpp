#include<iostream>
using namespace std ;

class rectional 
{
   private :
            int num ,den ;
   public :
           rectional ()         
           {
               num = den = 0;
           }
           rectional (int x,int y)
           {
                num = x,den = y ;
           }
           void input ()
           {
               cout << "Enter num"<< endl ;
               cin >> num ;
               cout << "Enter den " << endl;
               cin >> den ;
               cout << endl ;
           }
           void output ()
           {
               cout << num << "/" << den << endl ;
           }
};
main()
{
    rectional a ;
    a.output();

    rectional b(12,13);
    b.output();

    rectional c ;
    c.input();
    c.output();

}