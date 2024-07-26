#include <iostream>
using namespace std;

class Person
{
    string name, address;
public:
    Person(string n, string a)
    {
        name = n;
        address = a;
    }

    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }
    void setAddress(string& new_address)
    {
        address = new_address;
    }
    string toString()
    {
        Person::getName();
        Person::getAddress();
        Person& setAddress();
    }
};
class Student : public Person
{
    string program;
    int year;
    double fee;

public:
    Student(string n, string a,string p,int y,double f):Person(n, a)
    {
        program = p;
        year = y;
        fee = f;
    }
    string getProgram()
    {
        return program;
    }
    void setProgram(string & new_program)
    {
        program = new_program;
    }
    int getYear()
    {
        return year;
    }
    void setYear(int& new_year)
    {
        year = new_year;
    }
    double getFee()
    {
        return fee;
    }
    void setFee(double& new_fee)
    {
        fee = new_fee;
    }
    string toString()
    {
        Student::getName();
        Student::getAddress();
        Student::getProgram();
        Student::getYear();
        Student::getFee();
    }
};
class Staff : public Person
{
    string school;
    double pay;
public:
    Staff(string n, string a, string s,double p):Person(n,a)
    {
        school = s;
        pay = p;
    }
    string getSchool()
    {
        return school;
    }
    void setSchool(string& new_school)
    {
        school = new_school;
    }
    double getPay()
    {
        return pay;
    }
    void setPay(double& new_pay)
    {
        pay = new_pay;
    }
    string toString()
    {
        Staff::getName();
        Staff::getAddress();
        Staff::getSchool();
        Staff::getPay();
    }
};

int main()
{

    return 0;
}
 