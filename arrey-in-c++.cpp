#include<iostream>
using namespace std ;
main()
{
    int a[5],i;
   for(i = 0 ; i <= 4 ;i++)
    {
        cout << "Enter a number :";
        cin >> a[i];
    }

   for(i = 0 ; i <= 4 ;i++)
    cout << a[i] << "\t"; 
}