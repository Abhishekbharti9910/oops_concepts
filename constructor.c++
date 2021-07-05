#include<iostream>
#include<string>
using namespace std;
class CAR
{
private:
    std::string compName;
    std::string carName;
    double price;
    float mileage;
public:
    CAR();
    void set(string comp, string car, double price, float mileage);
    CAR(string comp, string car, double pri, float mile);
    ~CAR();
    void displayData(){
        std::cout<<"company name : "<< compName <<std::endl;
        std::cout<<"car name : "<< carName <<std::endl;
        std::cout<<"price : "<< price <<std::endl;
        std::cout<<"mileage : "<< mileage <<std::endl;
        std::cout<<std::endl;
    }
};

CAR::CAR()
{
    std::cout<<"here default constructor is called"<<std::endl;
    compName = "toyota";
}
CAR::CAR(string comp, string car, double pri, float mile){
    compName = comp;
    carName = car;
    price = pri;
    mileage = mile;
}
CAR::~CAR()
{
    std::cout<<"here destructor is called"<<std::endl;

}

void CAR::set(string comp, string car, double price, float mileage){
    compName = comp;
    carName = car;
    price = price;
    mileage = mileage;
}

int main()
{
    CAR car2("Toyota","fortuner", 3500000.00, 10.00);
    car2.displayData(); 
    car2.set("Toyota", "fortuner", 3500000.00, 9.00);
    car2.displayData(); 
    return 0;
}