// multiple inheritance
#include<iostream>
using namespace std;
class labM{
    protected:
        float oops;
        float os;
        float wt;
    public:
        labM(){};
        void setLab(float, float, float);
        void dispLab(void){
            std::cout << "practical Marks in oops : "<<oops << std::endl;
            std::cout << "practical Marks in os : "<<os << std::endl;
            std::cout << "practical Marks in wt : "<<wt << std::endl;
        };    
};
void labM::setLab(float ops, float operS, float webTech){
    oops = ops;
    os = operS;
    wt = webTech;
};
class theory{
    protected:
        float theoryOops;
        float theoryOs;
        float theoryWt;
    public:
        theory(){};
        void SetTheory(float, float, float);
        void dispTheory(void){
            std::cout << "Theory Marks in OOPs : "<<theoryOops << std::endl;
            std::cout << "Theory Marks in OS : "<<theoryOs << std::endl;
            std::cout << "Theory Marks in WT : "<<theoryWt << std::endl;
        };    
};
void theory::SetTheory(float oop, float os, float wt){
    theoryWt=wt;
    theoryOops = oop;
    theoryOs = os;
};

class result : public theory, public labM{
    protected:
        float totalOops;
        float totalOs;
        float totalWt;
        float total;
    public:
        result(){};
        void getTotalWt(void){
            totalWt = wt+ theoryWt;
            std::cout << "total marks in wt : "<<totalWt << std::endl;
        }    
        void getTotalOops(void){
            totalOops = theoryOops + oops;
            std::cout << "total marks in oops : "<<totalOops << std::endl;
        }    
        void getTotalOs(void){
            totalOs = os + theoryOs;
            std::cout << "total marks in OS : "<<totalOs << std::endl;
        }    
        void getTotal(void){
            total = totalOs+totalWt+totalOops;
            std::cout << "total marks : "<<total<< std::endl;
        }
};

int main()
{
    result r1;
    r1.setLab(35,31,32);
    r1.SetTheory(56, 65, 70);
    r1.dispLab();
    r1.dispTheory();
    r1.getTotalOops();
    r1.getTotalOs();
    r1.getTotalWt();
    r1.getTotal();
    return 0;
}