#include<iostream>
using namespace std;

class alpha
{
    private:
    int x;

    public:
    alpha(int i)
    {
        x=i;
        cout<<"Alpha has been constructed "<<"\n";
    }
    void show_x (void)
    {
        cout<<"x="<<x<<"\n";
    }
};

class beta
{
    private:
    float y;

    public:
    beta(float j)
    {
        y=j;
        cout<<"Beta has been constructed"<<"\n";
    }
    void show_y(void)
    {
        cout<<"y="<<y<<"\n";
    }
};

class gamma:public beta, public alpha
{
    private:
    int m,n;

    public:
    gamma(int a, float b, int c, int d):alpha(a), beta(b)
    {
        m=c;
        n=d;
        cout<<"Gamma has been constructed"<<"\n";
    }
    void show_mn(void)
    {
        cout<<"m="<<m<<"\n";
        cout<<"n="<<n<<"\n";
    }

};

int main()
{
    gamma g(3,5.5,6,2);
    g.show_x();
    g.show_y();
    g.show_mn();
    
    return 0;
}
