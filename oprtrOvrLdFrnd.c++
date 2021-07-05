#include <iostream>
using namespace std;
const int size = 3;

class VECTOR
{
private:
    int v[size];
public:
    VECTOR();
    VECTOR(int *x);
    friend VECTOR operator*(int a, VECTOR b);
    VECTOR();
    ~VECTOR();
    void disp(void);
};

VECTOR::VECTOR()
{
    for (int i = 0; i < size; i++)
    {
        v[i] = i;
    }
}

VECTOR::VECTOR(int *x){
    for (int i = 0; i < size; i++)
    {
        v[i] = x[i];
    }
}
VECTOR operator* (int a, VECTOR b){
    VECTOR k;
    for (int i = 0; i < size; i++)
    {
        k.v[i] = a * b.v[i];
    } 
}
void VECTOR::disp(){
    for (int i = 0; i < size; i++)
    {
        std::cout << v[i]<<" " << std::endl;
    }
    
}
VECTOR::~VECTOR()
{
}

int x[3] = {32,43,23};

int main() {
    VECTOR v1;
    v1.disp();
    return 0;
}