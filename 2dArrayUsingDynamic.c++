#include <iostream>
using namespace std;
class matrix
{
private:
    int **p;
    int d1,d2;
public:
    matrix(int x, int y);
    void set(int i, int j, int value){
         p[i][j] = value;
    };
    int &get(int i, int j){
        return p[i][j];
    }
    ~matrix();
};
matrix::~matrix(){
    for (int i = 0; i < d1; i++)
    {
        delete p[i];
        delete p;
    }
    
}

matrix::matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];//creates an array pointer
    for (int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
    }
}

int main() {
    matrix m1(3,3);
    int value;
    int m,n;
    std::cout << "enter matrix of" << std::endl;
    cin>>m>>n;
    std::cout << "enter the value row by row >>" << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>value;
            m1.set(i,j,value);
        }
        
    }
            std::cout << "values in matrix : >" << std::endl;
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
         std::cout << m1.get(k,l)<<" "; 
        }
        std::cout <<std::endl;
        
    }
    
    
    return 0;
}