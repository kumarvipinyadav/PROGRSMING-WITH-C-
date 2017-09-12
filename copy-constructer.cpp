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
          rectional ( rectional &z)
           {   
               num = z.num ;
               den = z.den ;
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
    rectional a ,c(23,45) ;
    rectional b = c ; 
    b.output();
}