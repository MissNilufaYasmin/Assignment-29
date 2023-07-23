/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
    Complex c1;
    Int x=5;
    c1=x;
    return 0;
}
*/
#include<iostream>
using namespace std ;

class Complex
{
    int a , b ;

    public :
        Complex(int y)
        {
            cout<<"PC-Called"<<endl ;
            a = y ;
            b = y ;
        }
        Complex()
        {
            cout<<"DC-Called"<<endl ;
        }
        void Display()
        {
            cout<<"Real = "<<a<<" , Img = "<<b <<endl ;
        }
};
int main ()
{
    /*int x = 10 ;
    Complex c=x ;
    c.Display() ;*/

    Complex c ;
    int x = 5 ;
    c = x ;
    c.Display() ;

    return 0 ;
}
