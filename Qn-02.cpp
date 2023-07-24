/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=c1;
    return 0;
}*/

#include<iostream>
using namespace std ;

class Complex
{
    int a , b ;

    public :
        void setData(int x, int y)
        {
            a = x ;
            b = y ;
        }
        void Display()
        {
            cout<<"Real = "<<a<<" , Img = "<<b <<endl ;
        }
        operator int ()
        {
            cout<<"Type casting"<<endl ;
            return a+b ;
        }
};
int main ()
{
    Complex c ;
    c.setData(3,4) ;

    int x ;
    x = c ;

    c.Display() ;
    cout<<"X = "<<x<<endl ;

    return 0 ;
}
