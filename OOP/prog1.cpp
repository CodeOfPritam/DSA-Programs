#include <iostream>
using namespace std;

class Teacher
{
    // By default attriutes and methods of a class in c++ are private, that is, only accessible inside the class so we need to write the access modifier as 'public'.

    // properties of the class declared aong with access modifiers

private: // private property
    int salary;
    int tax;

public: // public property
    string name, dept, subject;

    // Teacher() // constructor should always be declared as public to give its access to the main function for calling at the time of object creation
    // {
    //     cout << "Hi I am your teacher!" << endl;
    //     dept = "Computer Science";
    // } //Non parameterised constructor

    Teacher(string name, string dept, string subject, double salary)
    {
        this->name=name;
        this->dept=dept;
        this->salary=salary;
        (*this).subject=subject;
    } //Parameterised constructor

    //Copy constructor
    Teacher(Teacher &obj) //pass by reference
    {
        cout<<"I am custom copy constuctor"<<endl;
        this->name=obj.name;
        this->dept=obj.dept;
        this->subject=obj.subject;
        this->salary=obj.salary;
    }

    // methods or member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter function
    void setSalary(double sal)
    {
        salary = sal;
    }

    // Getter function
    double getSalary()
    {
        return salary;
    }

    double showTax()
    {
        tax = 0.05 * salary;
        return tax;
    }

    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Teacher t1("Pritam", "Computer Science", "Mathematics", 50000);
    // t1.name = "Harry";
    // // t1.dept = "Mechanical";
    // t1.subject = "Engineering Mathematics";
    // t1.setSalary(50000);
    // cout << "Teacher's name: " << t1.name << endl;
    // cout << "Teacher's department: " << t1.dept << endl;
    // cout << "Teacher's subject: " << t1.subject << endl;
    // cout << "Teacher's salary: " << t1.getSalary() << endl;
    // cout << "Tax incurred on the teacher's salary: " << t1.showTax() << endl;

    t1.getInfo();

    Teacher t2(t1); //Copy constructor by default or custom copy constructor
    t2.getInfo();

    return 0;
}
