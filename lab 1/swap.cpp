#include<iostream>
using namespace std;

class class_2;
class class_1
{
    private:
    int value1;
    public:
    void input(void)
    {
        cout<<"enter the value: ";
        cin>>value1;
    }
    void display(void)
    {
        cout<<"value 1= "<<value1<<"\n";
    }
    friend void exchange(class_1&,class_2&);
};
class class_2
{
    private:
    int value2;
    public:
    void input(void)
    {
       cout<<"enter the value: ";
       cin>>value2;
    }
    void display(void)
    {
        cout<<"value 2= "<<value2<<"\n";
    }
    friend void exchange(class_1&,class_2&);
};
void exchange(class_1&x,class_2&y)
{
    int temp;
    temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main()
{
    class_1 c1;
    class_2 c2;
    c1.input();
    c2.input();
    cout<<"values before exchanging : "<<"\n";
    c1.display();
    c2.display();
    exchange(c1,c2);
    cout<<"values after exchanging: "<<"\n";
    c1.display();
    c2.display();
    return 0;
}