// author : abhishek bharti
// date : 14/06/2021
// copy constructor
#include <iostream>
using namespace std;
class CODE
{
private:
    int id;
public:
    CODE(){};
    CODE(int a);
    CODE(CODE & x);
    ~CODE();
    void disp();
};
void CODE :: disp(){
    std::cout<< "code id : "<<id<<std::endl;
}
CODE::CODE(int a)
{
    id = a;
}
CODE::CODE(CODE & x)
{
    id = x.id;
}

CODE::~CODE()
{
}
int main()
{
    CODE c1,c2(43);
    c1.disp();
    c2.disp();
    CODE c3 = c2;
    CODE c4 = c3;
    CODE c5(c1);
    c5.disp();

    return 0;
}

