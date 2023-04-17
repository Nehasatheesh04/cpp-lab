#include<iostream>
using namespace std;

class matrix
{
    private:
    int **p;
    int d1,d2;

    public:
    matrix(int x,int y);
    ~matrix();
    void get_elements(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int put_elements(int i,int j)
    {
        return p[i][j];
    }
};
matrix::matrix(int x,int y)
{
    d1=x;
    d2=y;
    p=new int*[d1];

    for(int i=0;i<d1;i++)
    {
        p[i]=new int(d2);
    }
}
matrix::~matrix()
{
    for(int i=0;i<d1;i++)
    {
        delete p[i];
    }
    delete p;
    cout<<"allocated memory has been deleted";
}
int main()
{
    int m,n;
    cout<<"enter the size of the matrix ";
    cin>>m>>n;

    matrix A(m,n);
    cout<<"enter the matrix elements row by row ";

    int value;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>value;
            A.get_elements(i,j,value);
        }
    }
    cout<<"the entered matrix is = "<<"\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A.put_elements(i,j);
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
       
}
    

