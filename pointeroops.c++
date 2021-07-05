#include<iostream>
using namespace std;
int main(){
    int a, *ptr1 , **ptr2;
    a = 50;
    ptr1 = &a;
    ptr2 = &ptr1;
    std::cout<<"The value of a : "<<a<<std::endl;
    std::cout<<"The address of a : "<<&a<<std::endl;
    std::cout<<"The address of a : "<<ptr1<<std::endl;
    std::cout<<"The value of a : "<<*ptr1<<std::endl;
    std::cout<<"The address of ptr1 : "<<&ptr1<<std::endl;
    std::cout<<"The address of ptr1 : "<<ptr2<<std::endl;
    std::cout<<"The address of ptr2 : "<<&ptr2<<std::endl;
    *ptr1 = 60;
    std::cout<<"The value of a : "<<a<<std::endl;
    ptr1+=2;
    std::cout<<"The address of ptr1 : "<<&ptr1<<std::endl;
    std::cout<<"The address of a : "<<&a<<std::endl;
    *ptr1 = 70;
    std::cout<<"The value of a : "<<*ptr1<<std::endl;


    return 0;
    
}