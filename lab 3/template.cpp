#include<iostream>
using namespace std;

template<class T>
class calculator
{
    T num1,num2;
    public:
    calculator(T n1, T n2) 
    {
        num1=n1;
        num2=n2; 
    }
    void displayresult(void)
    {
        cout<<"the numbers are :"<<num1<<"and"<<num2<<"\n"; 
        cout<<num1<<"+"<<num2<<"="<<add()<<"\n"; 
        cout<<num1<<"-"<<num2<<"="<<substract()<<"\n"; 
        cout<<num1<<"*"<<num2<<"="<<multiply()<<"\n"; 
        cout<<num1<<"/"<<num2<<"="<<divide()<<"\n"; 
    }
    T add(){return(num1+num2);}
    T substract(){return(num1-num2);}
    T multiply(){return(num1*num2);}
    T divide(){return(num1/num2);}
};
int main()
{
    calculator<int> icalc(2,5);
    calculator<float> fcalc(2.3,9.7);
    icalc.displayresult();
    fcalc.displayresult();
    return 0;
}
