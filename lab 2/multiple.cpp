#include <iostream>
using namespace std;

// Base class Person
class Person {
    protected:
        string name;

    public:
        Person(string n) {
            name = n;
        }

        void display() {
            cout << "Name: " << name << endl;
        }
};

// Derived class Student
class Student : public Person {
    protected:
        int roll_no;

    public:
        Student(string n, int r) : Person(n) {
            roll_no = r;
        }

        void display() {
            Person::display();
            cout << "Roll No: " << roll_no << endl;
        }
};

// Derived class Exam that inherits from Student
class Exam : public Student {
    protected:
        int marks;

    public:
        Exam(string n, int r, int m) : Student(n, r) {
            marks = m;
        }

        void display() {
            Student::display();
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    Person p("John Doe");
    Student s("Jane Smith", 12);
    Exam e("Bob Johnson", 12, 80);

    p.display();
    cout << endl;

    s.display();
    cout << endl;

    e.display();
    cout << endl;

    return 0;
}
