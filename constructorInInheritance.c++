// constructor in inheritance
#include<iostream>
#include<string>
using namespace std;
class A{
        int a;
    public:
        A(int k){
            a = k;
            std::cout << "we are in Base class" << std::endl;
            std::cout << "value of a : "<<a << std::endl;
        };
};
class B : public A{
        string name;
    public:
         B(int a, string n) : A(a){
             name = n;
            std::cout << "we are in second last Derived class" << std::endl;
            std::cout << " name : "<<name << std::endl;
         };

};

class C : public B{
        int c;
    public:
        C(string nme, int a, int b) : B(b,nme){
            c = a;
            std::cout << "we are in last Derived class" << std::endl;
            std::cout << "value of c : "<<c << std::endl;
        };
};

int main()
{   
    C c1("abhi", 23,43);
    
    return 0;
}