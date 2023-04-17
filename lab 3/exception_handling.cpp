#include<iostream>
using namespace std;

float zero_division(float x, float y)
{
    if(y=0)
    {
       throw "division by zero";
    }
    else
    {
        return (x/y); 
    }
}

int main()
{
    float a, b, c;
    cout<<"Enter first decimal value= ";
    cin>>a;

    cout<<"Enter second decimal value= ";
    cin>>b;


    try
    {
        c=zero_division(a,b);
        cout<<c;
    }
    catch(const char *msg)
    {
        cout<<"Exception Caught: "<<msg<<"\n";
    }
    
    return 0;
}