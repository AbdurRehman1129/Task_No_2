#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name, address;
public:
    Person(string n , string a)
    {
        name = n;
        address = a;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void toString(Person)
    {
        Person::name = name;
        Person::address = address;
    }
    string toString()
    {
        return "Name " + name + "\nAddress " +address;
    }
};


class Student : public Person  //Student class derived from Person class
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
    
    void setProgram(string program)
    {
        this->program = program;
    }
    string getProgram()
    {
        return program;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return year;
    }
    void setFee(double fee)
    {
        this->fee = fee;
    }
    double getFee()
    {
        return fee;
    }
   
    string toString() //overriding
    {
        return Person::toString()+ "\nProgram " + program + "\nYear "+ to_string(year) + "\nFee " + to_string(fee);
    }
};
class Staff : public Person         //Staff class derived from Person class
{
    string school;
    double pay;
public:
    Staff(string n, string a, string s,double p):Person(n,a)
    {
        school = s;
        pay = p;
    }
    void setSchool(string school)
    {
        this->school = school;
    }
    string getSchool()
    {
        return school;
    }
    void setPay(double pay)
    {
        this->pay = pay;
    }
    double getPay()
    {
        return pay;
    }
    
    string toString() //overriding
    {
        return Person::toString()+ "\nSchool " + school + "\nPay " + to_string(pay);
    }
};

int main()
{
    Person person = Person("Abdur Rehman", "Bagh");
    cout << person.toString()<<endl;
    Student student = Student("Abdur Rehman", "Bagh", "SE", 1, 50000);
    cout << "\n"+ student.toString() << endl;
    Staff staff = Staff("Abdur Rehman","Bagh","READ",40000);
    cout<< "\n" + staff.toString()<<endl;
   
    return 0;
}
 