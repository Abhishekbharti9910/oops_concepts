#include <iostream>
using namespace std;
class fixedDeposit
{
private:
    long int p_amount;//principal amount
    int year;//year of deposit
    float rate;//rate of interest
    float r_value;//return value
public:
    fixedDeposit(){};
    fixedDeposit(long int p, int y, float r);
    fixedDeposit(long int p, int y, int r);
    void show();
    // ~fixedDeposit();
};
// float type rate
fixedDeposit::fixedDeposit(long int p, int y, float r){
    std::cout << "float type constructor is called\n" << std::endl;
    p_amount = p;
    year = y;
    rate = r;
    r_value = p_amount;
    for (int i = 0; i < y; i++)
    {
        r_value *= (1+rate);
    }
}
fixedDeposit::fixedDeposit(long int p, int y, int r)//kisi ne bola bhi 2 ya 3 percent aur dal bhi
 //                                                 wohi diya kyunkki percent yani something/100 
{
    std::cout << "Int constructor is called now\n" << std::endl;
    p_amount = p;
    year = y;
    rate = r;
    r_value = p_amount;
    for (int i = 0; i < y; i++)
    {
        r_value *= (1+ (float(r)/100));
    }
    
}
void fixedDeposit ::show(){
    std::cout << "Principal amount of customer : " <<p_amount
              <<"\nDeposited for years : "<<year
              <<"\nAt rate of : "<<rate
              <<"\nAmount to return : "<<r_value 
              <<std::endl;
}

int main()
{
    long int p_amt = 4000;
    int y = 2;
    float rate = 0.12;
    int rate2 = 19;
    fixedDeposit f1(p_amt, y, rate), f2(p_amt, y, rate2);
    f1.show();
    f2.show();
    return 0;
} 
