// student roll no.
// prac marks
// theory marks
// result
#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
        int roll_no;
        string name; 
    public:      
        void dispStu(){
            std::cout << "name : "<<name << std::endl;
            std::cout << "roll No. : "<<roll_no << std::endl;
        };     
        void setStu(string nme, int roll){
            name = nme;
            roll_no = roll;
        };
};
class Theory : public virtual Student{
    protected:
        float oops;
        float os;
    public:
        void setTheo(float ops, float Os){
            oops = ops;
            os = Os;
        };
        void dispTheo(){
            std::cout << "theory marks" << std::endl;
            std::cout << "oops : "<<oops << std::endl;
            std::cout << "OS : "<<os << std::endl;
        };

};
class Practical : public virtual Student{

    protected:
        float oopsP;
        float osP;
    public:
        void setPrac(float ops, float Os){
            oopsP = ops;
            osP = Os;
        };
        void dispPrac(){
            std::cout << "practical marks" << std::endl;
            std::cout << "oops : "<<oopsP << std::endl;
            std::cout << "OS : "<<osP << std::endl;
        };
};
class Result : public Theory, public Practical{
    protected:
        float total;
        float percent;
    public:
        void getResult(void){
            dispStu();
            dispTheo();
            dispPrac();
            total = oops + os + oopsP + osP;
            percent = (total/200)*100;
            std::cout << "total you get : "<<total << std::endl;
            std::cout << "percentage you get : "<<percent << std::endl;
        }    
};
int main()
{
    Result r1;
    r1.setStu("abhi",191910227);
    r1.setPrac(23.43,21.6);
    r1.setTheo(45,65);
    r1.getResult();

    
    return 0;
}