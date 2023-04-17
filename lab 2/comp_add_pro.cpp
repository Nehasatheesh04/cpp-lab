#include<iostream>
using namespace std;

class complex
{
    private:
    float x,y;

    public:
    complex(){};
    complex(float real, float img)
    {
        x=real;
        y=img;
    }
    friend complex operator+(complex,complex);
    friend complex operator*(complex,complex);
    void display(void);
};
complex operator+(complex a, complex b)
{
    complex temp;
    temp.x=a.x + b.x;
    temp.y=a.y+b.y;
    return temp;
}
complex operator*(complex a, complex b)
{
    complex prod;
    prod.x=a.x * b.x - a.y * b.y;
    prod.y=a.x * b.y + a.y * b.x;
    return prod;
}
void complex::display()
{
    cout<<x<<"+"<<y<<"i"<<'\n';
}

int main()
{
    int re1,re2,im1,im2;
    cout<<"Enter the real and imaginary part of first complex number: ";
    cin>>re1>>im1;
    cout<<"Enter the real and imaginary part of second complex number: ";
    cin>>re2>>im2;

    complex c1(re1,im1);
    complex c2(re2,im2);
    complex sum=c1+c2;
    complex product=c1*c2;

    cout<<"c1 = ";
    c1.display();

    cout<<"c2 = ";
    c2.display();

    cout<<"sum= ";
    sum.display();

    cout<<"product= ";
    product.display();

    return 0;
}