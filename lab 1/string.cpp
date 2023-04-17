#include <iostream>
#include <cstring>
using namespace std;

class strings
{
    char *name;
    int length;
    public:
    strings()
    {
        length=0;
        name=new char[length+1];
    }
    strings(const char*s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void display(void)
    {
        cout<<" string is "<<name;
    }
    int getlength(void)
    {
        return length;
    }
    void concatenate(strings,strings);
    
};
void strings::concatenate(strings a,strings b)
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}

int main()
{
    int str1len,str2len;
    strings s1;
    strings n1("john");
    n1.display();
    cout<<"\n";
    str1len=n1.getlength();
    cout<<"the length of the string is: "<<str1len<<"\n";

    strings n2("smith");
    n2.display();
    cout<<"\n";
    str2len=n2.getlength();
    cout<<"the length of the string is: "<<str2len<<"\n";
    
    cout<<"      comparison     "<<"\n";
    if(str1len>str2len)
    {
        cout<<"the larger ";
        n1.display();
        cout<<"\n";
        cout<<"the smaller ";
        n2.display();
        cout<<"\n";
    }
    else{
        cout<<"the larger ";
        n2.display();
        cout<<"\n";
        cout<<"the smaller ";
        n1.display();
        cout<<"\n";
    }

    cout<<"        concatenation      "<<"\n";
    s1.concatenate(n1,n2);
    cout<<"concatenated ";
    s1.display();
    cout<<"\n";
}