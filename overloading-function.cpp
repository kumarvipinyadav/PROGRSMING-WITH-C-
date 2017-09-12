#include<iostream>
using namespace std ;

int sum ( int x ,int y)
{
    return x+y ;
}

float sum ( float x ,float y)
{
    return x+y ;
}

double sum ( double x ,double y)
{
    return x+y ;
}

int sum ( int x ,int y,int z)
{
    return x+y+z ;
}

main()
{
    int     r = sum (5,6) , u = sum(23,12,15) ;
    float   s = sum (5.67,6.89);
    double  t = sum (5.0099,6.00087);

    cout << "Sum of integer is :"<< r << endl << "and  " << u << endl;
    cout << "Sum of float is :"<< s << endl;
    cout << "Sum of double is :"<< t << endl;

}