#include<iostream>
using namespace std;

class complex{
    private:
    float real,imag;
    public:
complex(){};
complex(float x)
{
    real=x;
    imag=x;
 }
complex(float x,float y) {
    real=x;
    imag=y;
 }
complex operator+(complex);
void display (void);
};
complex complex::operator+(complex c)
{
    complex c3;
    c3.real=real+c.real;
    c3.imag=imag+c.imag;
    return c3;
}
void complex ::display()
{
    cout<<real<<"+"<<imag<<"i";
}
int main()
{float real,imag;
cout<<"enter first complex no :";
cin>>real>>imag;
complex a(real,imag);
cout<<"enter second complex no: ";
cin>>real>>imag;
complex b(real,imag);
complex c=a+b;
cout<<"sum of complex numbers : ";
c.display();

return 0;
}

