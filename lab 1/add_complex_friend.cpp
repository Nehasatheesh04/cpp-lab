#include<iostream>
using namespace std;

class complex 
{
    private:
    float real;
    float imag;
    public:
    complex(){};
    complex(float,float);
    friend complex sum(complex,complex);
    void show(void);
};
complex::complex(float x,float y)
{
    real=x;
    imag=y;
}
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}
void complex::show(void)
{
    cout<<real<<"+"<<imag<<"i";
}
int main()
{
int real,imag;
cout<<"enter first complex no: ";
cin>>real>>imag;
complex A(real,imag);
cout<<"enter second no: ";
cin>>real>>imag;
complex B(real,imag);
complex c;
c=sum(A,B);
cout<<"sum of numbers = ";
c.show();
return 0;
}