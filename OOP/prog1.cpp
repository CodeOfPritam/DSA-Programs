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
        tax=0.05*salary;
        return tax;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Harry";
    t1.dept = "Mechanical";
    t1.subject = "Engineering Mathematics";
    t1.setSalary(50000);
    cout << "Teacher's name: " << t1.name << endl;
    cout << "Teacher's department: " << t1.dept << endl;
    cout << "Teacher's subject: " << t1.subject << endl;
    cout << "Teacher's salary: " << t1.getSalary() << endl;
    cout << "Tax incurred on the teacher's salary: " << t1.showTax() << endl;

    return 0;
}
