#include <iostream>
using namespace std;
class SPACE
{
private:
    int x,y,z;
public:
    SPACE(void){
        x=0;
        y=0;
        z=0;
    }
    SPACE(int i, int j, int k);
    ~SPACE();
    void display(void);
    void operator-();
    SPACE operator+(SPACE a){
        SPACE temp;
        temp.x = x + a.x;
        temp.y = y + a.y;
        temp.z = z + a.z;
        return temp;
    };
};
void SPACE::display(void){
    std::cout <<x<<"i ";
    std::cout <<y<<"j ";
    std::cout <<z<<"k" << std::endl;
}
void SPACE::operator-(){
    x=-x;
    y=-y;
    z=-z;
}
SPACE::SPACE(int i, int j, int k)
{
    x=i;
    y=j;
    z=k;
}

SPACE::~SPACE()
{
}
int main() {
    SPACE s1(2,3,4);
    SPACE s2(-2,4,-9);
    s1.display();
    s2.display();
    -s2;
    s2.display();
    SPACE s3 = s1+s2;
    s3.display();
    return 0;
}

