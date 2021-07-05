//just predefined way of initalising variable in constructor
#include<iostream>
using namespace std;
class Base{
        int a;
        int b;
    public:
        Base(int m, int n) : a(m),b(n+m){
            std::cout << "value of a : "<<a << std::endl;
            std::cout << "value of b : "<<b << std::endl;
        }
};
int main()
{
    Base b1(43,65);
    return 0;
}