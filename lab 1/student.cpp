#include<iostream>
using namespace std;

class student
{
    private:
    char Name[20];
    int Roll_no;
    int Mark[3];
    public:
    void input(void);
    char calcgrade(void);
    void display (void)
    {
        cout<<"    student details    "<<"\n";
        cout<<"NAME: "<<Name<<"\n";
        cout<<"ROLL NO: "<<Roll_no<<"\n";
        cout<<"GRADE: "<<calcgrade()<<"\n";
    }
};
void student:: input(void)
{
    cout<<"enter student name: ";
    cin>>Name;
    cout<<"enter roll no: ";
    cin>>Roll_no;
    cout<<"enter mark of 1st subject: ";
    cin>>Mark[0];
    cout<<"enter mark of 2nd subject: ";
    cin>>Mark[1];
    cout<<"enter mark of 3rd subject: ";
    cin>>Mark[2];
}
char student::calcgrade(void)
{
    float sum,avg;
    char grade;

    for(int i=0;i<3;i++)
    {
        sum=sum+Mark[i];
    }
    avg=sum/3;
    if (avg>80 && avg<=100)
    {
        grade='A';
    }
    else if(avg>70 && avg<=80)
    {
        grade='B';
    } 
    else
    {
        grade='C';
    }
    return grade;
    }
    int main()
    {
        int n;
        cout<<"enter the no of students: ";
        cin>>n;

        student s[n];
        for(int i=0;i<n;i++)
        {
            s[i].input();
            s[i].display();
        }
        return 0;
    }



