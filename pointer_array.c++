#include<iostream>
using namespace std;
int main(){
    int num[5] = {23,43,3,22,34};
    int *ptr;
    for (int i = 0; i < 5; i++)
    {
        cout<<num[i]<<std::endl;
    }
    ptr = num;
    cout<<"address of num : "<<&num<<std::endl;
    cout<<"address of num "<<ptr<<std::endl;
    cout<<"value of num "<<*ptr<<std::endl;
    ptr+=2;
    cout<<"value of ptr + 2 "<<*ptr<<std::endl;
    ptr--;
    cout<<"value of ptr - 1 "<<*ptr<<std::endl;
    ptr+=3;
    cout<<"value of ptr + 2 "<<*ptr<<std::endl;
    ptr-=2;
    cout<<"value of ptr - 2 "<<*ptr<<std::endl;
    
}