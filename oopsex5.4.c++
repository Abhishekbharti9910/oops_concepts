/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class vector{
  float x;  
  float y;  
  float z;
  public:
  void set(){
    float i,j,k;
    cout<<"plz enter value of X-axis >>"<<std::endl;
    std::cin >> i;
    cout<<"plz enter value of Y-axis >>"<<std::endl;
    std::cin >> j;
    cout<<"plz enter value of Z-axis >>"<<std::endl;
    std::cin >> k;
      x=i;
      y=j;
      z=k;
  }
  
  void modify(){
      int choose;
      float mod_val;
      cout<<"1. Modify X-axis direction (press 1)\n2. Modify Y-axis direction (press 2)\n3. Modify Z-axis direction (press 3)"<<std::endl;
      cin>>choose;
      switch(choose){
          case 1:
          cout<<"plz enter new value"<<std::endl;
          cin>>mod_val;
          x=mod_val;
          break;
          case 2:
          cout<<"plz enter new value"<<std::endl;
          cin>>mod_val;
          x=mod_val;
          break;
          
          case 3:
          cout<<"plz enter new value"<<std::endl;
          cin>>mod_val;
          x=mod_val;
          break;
          
          default:
          cout<<"you entered wrong input choose from given"<<std::endl;
      }
      
  }
    void scalMul(float scaler){
          x = scaler*x;
          y = scaler*y;
          z = scaler*z;
      }
    void display(){
        cout<<"Your vector : > "<<x<<"i+ "<<y<<"j+ "<<z<<"+"<<std::endl;
    }
    
    void sum(vector a, vector b);
  
};


void vector :: sum(vector a, vector b){
    x = a.x + b.x;
    y = a.y + b.y;
    z = a.z + b.z;
    
}

int main()
{
    cout<<"Hello World";
    vector a[2],v3;
    for(int i=0; i<2; i++){
        a[i].set();
    }
    for(int j=0; j<2; j++){
        a[j].display();
    }
    v3.sum(a[0],a[1]);
    v3.display();
    return 0;
}

