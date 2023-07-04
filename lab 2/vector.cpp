#include<iostream>
using namespace std;

class vector
{
    private:
    int x,y,z;

    public:
    vector()
    {
        x=0;
        y=0;
        z=0;
    }
    vector(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }

    friend vector operator*(vector v1, vector v2);
    friend ostream& operator<<(ostream& os, vector v);
    friend istream& operator>>(istream& is, vector& v);
};

vector operator*(vector v1, vector v2)
{
    vector v3;
    v3.x=v1.y*v2.z-v1.z*v2.y;
    v3.y=v1.z*v2.x-v1.x*v2.z;
    v3.z=v1.x*v2.y-v1.y*v2.x;
    return v3;
}

ostream& operator<<(ostream& os, vector v)
{
    os<<"("<<v.x<<","<<v.y<<","<<v.z<<")";
    return os;
}

istream& operator>>(istream& is, vector& v)
{
    cout<<"Enter the value of x: ";
    is>>v.x;
    cout<<"Enter the value of y: ";
    is>>v.y;
    cout<<"Enter the value of z: ";
    is>>v.z;
    return is;
}

int main()
{
    vector v1, v2, v3;
    cout<<"Enter vector 1: "<<"\n";
    cin>>v1;
    cout<<"Enter vector 2: "<<"\n";
    cin>>v2;

    v3=v1*v2;
    cout<<"Vector product of vector 1 and vector 2= "<<v3<<"\n";
    
    return 0;
}
