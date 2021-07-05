/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
// Abstaction->
class Abstractemployee{
  virtual void askforpromotion()=0;
};

// using namespace std;
class Employee:Abstractemployee {
    // encapsualted use setter and getter to take and give value
    protected:
  std::string Name;
  std::string Company;
  int Age;
    public:
    // Constructor ->
  Employee(std::string name, std::string company, int age){
      Name=name;
      Company = company;
      Age = age;

  }
//   geter, setter ::->
  void setName(std::string name){
      Name = name;
  }
  std::string getName(){
      return Name;
  }
  void setCompany(std::string company){
      Company = company;
  }
  std::string getCompany(){
      return Company;
  }
  void setAge(int age){
      if(age>=18){
      Age = age;
      }
    std::cout<<"Age is not entered coz age is less the 18"<<std::endl;
  }
  int getAge(){
      return Age;
  }
  
  void introduceYourself(){
      std::cout<<"Name of the Employee :"<<Name<<std::endl;
      std::cout<<"Company of the Employee :"<<Company<<std::endl;
      std::cout<<"Age of the Employee :"<<Age<<std::endl;
      
  }
//   ->Abstraction class from virtual help
  void askforpromotion(){
      if(Age>32){
          std::cout<<Name
          <<" You will get promoted today ;)"<<std::endl;
          return;
      }
        std::cout<<"Sorry no promotion for you :) "<<Name<<std::endl;
  }

  
};

class Developer:public Employee{
  std::string FavProgLang;
  public:
    Developer(std::string name, std::string company, int age, std::string favproglang)
    :Employee(name, company, age)
    {
        FavProgLang=favproglang;
    }
    void debug(){
        std::cout<<getName()<<" Debug program using "<<FavProgLang<<std::endl;
    }
};

class Tester:public Employee{
    std::string Country;
    public:
    Tester(std::string name, std::string company, int age, std::string country)
    :Employee(name,company,age)
    {
        Country=country;
    }
    void tstrcountry()
    {
        std::cout<<Name<<" is from "<<Country<<std::endl;
    }
};
int main()
{
    std::cout<<"Hello World"<<std::endl;
    
    Developer d1("ak-47", "amazon", 23, "c++");
    d1.introduceYourself();
    d1.debug();
     Tester t1("jhon wick", "microsoft", 34, "Azerbaijaan");
     t1.introduceYourself();
     t1.tstrcountry();
    
    return 0;
}
