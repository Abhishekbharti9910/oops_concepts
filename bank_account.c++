/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include<string>

using namespace std;

class BANK_ACCOUNT{
  std::string name;
  std::string account_num;
  std::string account_type;
  float balance;
  public:
  void set(string a, std::string acc_num, std::string acc_type){
      name = a;
      account_num = acc_num;
      account_type = acc_type;
      balance = 5000;
  }
  void deposit(float amt){
      balance+=amt;
  }
  int withdraw(float amt){
      if(amt>balance){
          cout<<"Not enough balance to execute transaction\nplz enter valid amount"<<std::endl;
          return -1;
      }
      else{
          balance-=amt;
          cout<<"Now total balance in your account :"<<balance<<std::endl;
          return 1;
      }
  }
  void balance_enquiry(){
      cout<<"Name of account holder : "<<name<<std::endl;
      cout<<"Balance amount : "<<balance<<std::endl;
  }
  
};


int main()
{
    cout<<"Hello World";
    
    BANK_ACCOUNT abhi;
    abhi.set("Mr. Abhishek Bharti", "sbi234512542345", "salary");
    abhi.balance_enquiry();
    abhi.deposit(120000.00);
    abhi.balance_enquiry();

    return 0;
}

