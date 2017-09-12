#include<iostream>
using namespace std ;
inline` int sum ( int x = 0 , int y = 0 ,int z = 0  )
{
    return x+y+z;
}
main()
{
   int a,b,c,s;
    
    cout << "Enter 3 number";
    cin >> a >> b >> c ;

    s = sum(a,b);

    cout << " THE SUM IS " << s;
}