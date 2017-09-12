#include<iostream>
#include<string.h>
using namespace std;

main()
{
    union
    {
        int x;
        float y;
        char z[20];
    };

      x = 23;
    cout << x <<endl;
      
      y = 6.5 ;
    cout << y <<endl;
    
    strcpy(z,"vipin");
    cout << z <<endl;

}