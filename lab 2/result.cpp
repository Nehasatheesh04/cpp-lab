#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void get_no(int);
    void put_no(void);
};
void student::get_no(int a)
{
    roll_no=a;
}
void student::put_no(void)
{
    cout<<"Roll no= "<<roll_no<<"\n";
}
class test:virtual public student{
    protected:
    float sub_1;
    float sub_2;
    public:
    void get_marks(float,float);
    void put_marks(void);
};
void test::get_marks(float x,float y)
{
    sub_1=x;
    sub_2=y;
}
void test::put_marks(void)
{
    cout<<"marks in subject 1: "<<sub_1<<"\n";
    cout<<"marks in subject 2: "<<sub_2<<"\n";
}
class sports:virtual public student
{
    protected:
    float score;
    public:
    void get_score(float);
    void put_score(void);
};
void sports::get_score(float s)
{
    score=s;
}
void sports::put_score(void)
{
    cout<<"score= "<<score<<"\n";
}
class result:public test,public sports
{
    private:
    float total;
    public:
    void put_total(void);
};
void result ::put_total(void)
{
    total=sub_1+sub_2+score;
    put_no();
    put_marks();
    put_score();
    cout<<"total= "<<total;
}
int main()
{
    result r;
    int r1;
    float s1,s2,s3;
    
     cout<<"Enter Student Roll-no= ";
    cin>>r1;

    cout<<"Enter Marks for Subject 1= ";
    cin>>s1;

    cout<<"Enter Marks for Subject 2= ";
    cin>>s2;

    cout<<"Enter Sports Score= ";
    cin>>s3;

    r.get_no(r1);
    r.get_marks(s1, s2);
    r.get_score(s3);
    r.put_total();


}