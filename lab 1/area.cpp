#include<iostream>
#include<cmath>
using namespace std;

float area(int side)
{
    return (side*side);    //square
}
int area(int length,int breadth)
{
    return(length*breadth);    //rectangle
}
float area (float a,float b,float c)
{
    float s=(a+b+c)/2;
    return(sqrt(s*(s-a)*(s-b)*(s-c)));   //triangle
}
float area(float r)
{
    return 3.14*r*r;   //circle
}
float area(float base,float height)
{
    return(base*height);   //parallelogram
}

int main()
{
    float rad,height,base,a,b,c;
    int choice, breadth, length, side;
    cout<<"1.square"<<"\n";
    cout<<"2.rectangle"<<"\n";
    cout<<"3.triangle"<<"\n";
    cout<<"4.circle"<<"\n";
    cout<<"5.parallelogram"<<"\n";

    cout<<"enter your choice= ";
    cin>>choice;

    if(choice==1)
    {
        cout<<"enter side of square= ";
        cin>>side;
        cout<<"area of square= "<<area(side)<<"\n";
    }
    else if(choice==2)
    {
        cout<<"enter length and breadth of rectangle= ";
        cin>>length>>breadth;
        cout<<"area of rectangle= "<<area(length,breadth)<<"\n";
    }
    else if(choice==3)
    {
        cout<<"enter side 1 of triangle";
        cin>>a;
        
        cout<<"enter side 2 of triangle";
        cin>>b;

        cout<<"enter side 3 of triangle";
        cin>>c;

        cout<<"area of triangle= "<<area(a, b, c)<<"\n";
    }
    else if(choice==4)
    {
        cout<<"enter radius of circle= ";
        cin>>rad;
        cout<<"area of circle= "<<area(rad)<<"\n";
    }
    else if(choice==5)
    {
        cout<<"enter base and height of parallelogram= ";
        cin>>base>>height;
        cout<<"area of parallelogram= "<<area(base,height)<<"\n";
    }
    return 0;
}

