#include<iostream>
using namespace std;

class rational 
{
   private :
             int num,den;
   public  :          
             void input()
             {
                 cout << "Enter numniter :" ;
                 cin >> num ;

                 cout << "Enter denomiter :" ;
                 cin >> den ;
             }

             void output ()
             {
                 cout << num << "/" << den << endl;
             }

};
main()
{
   rational a;

   a.input();
   a.output();
  
}