#include<iostream>
using namespace std;

class BASE_1{
    protected:
        int a;
    public:    
        void greet(void){
            std::cout << "good morning" << std::endl;
        };
};
class BASE_2{
    protected:
        int b;
    public:
        void greet(void){
            std::cout << "good evening" << std::endl;
        };
};

class DERIVE : public BASE_1 , public BASE_2{
    protected:
        int c;
    public:
    void greet(){//to deal with ambigius function problem
        BASE_2::greet();
    };
};

class D2 : public BASE_2{
    public:
   
};

int main()
{
    DERIVE a1;
    a1.greet();
    D2 ak;
    ak.greet();
    return 0;
}