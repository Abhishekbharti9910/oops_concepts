// #include<iostream>
// #include<string>
// using namespace std;
// class employee
// {
// private:
// public:
//     int empId;
//     int ageE;
//     int salary;
//     string branch;
//     employee();
//     employee(int id, int age, string bran);
//     void salarySet(int sal);
//     void set(int id, int age, string bran);
//     void disp(void);
//     void dispSalary(void);
//     ~employee();
// };

// class programmer : public employee
// {
// public:
//     int languageCode;
//     programmer(int inpId)
//     {
//         empId = inpId;
//         languageCode = 9;
//     }
//     void getData(){
//         cout<<empId<<endl;
//     }
// };


// void employee::set(int id, int age, string bran){
//     empId = id;
//     ageE = age;
//     branch = bran;
// }

// void employee::salarySet(int sal){
//     salary  = sal;
// }

// void employee::disp(){
//     std::cout << "Employ id : "<<empId<< std::endl;
//     std::cout << "Employ age : "<<ageE<< std::endl;
//     std::cout << "Employ branch : "<<branch<< std::endl;
// }

// void employee::dispSalary(){
//     std::cout << "Employ salary : "<<salary<< std::endl;
// }

// employee::employee(int id, int age, string bran)
// {
//     empId = id;
//     ageE = age;
//     branch = bran;
// }

// employee::~employee()
// {
// }




// int main()
// {
//     employee e1(101,26,"R&D");
//     e1.disp();
//     e1.salarySet(26000);
//     e1.dispSalary();
//     programmer skillf(10);
    
    
//     return 0;
// }
#include <iostream>
#include<string>
using namespace std;

// Base Class
class Employee
{
private:
    int kids;
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {};
    void disp(void);
};
void Employee:: disp(){
    std::cout << "employee id : "<<id<< std::endl;
}
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
private:
    string language;
    string expertIn;
public:
    int languageCode;
    Programmer(int Id)
    {
        id = Id;
        languageCode = 9;
    }
    Programmer(){

    };
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    skillF.disp();
    return 0;
}