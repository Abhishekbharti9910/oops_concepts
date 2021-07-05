#include<iostream>
#include<string>
using namespace std;
class student{
    protected:
        string name;
        int rollNo;
    public:
    student(){};    
    student(string,int);
    void setStudent(string, int);
    void dispStudent(void){
        std::cout << "student Name : "<<name<< std::endl;
        std::cout << "student roll number : "<<rollNo<< std::endl;
    };    
};
student::student(string nme, int rln){
    name = nme;
    rollNo = rln;
};
void student::setStudent(string nme, int rln){
    name = nme;
    rollNo = rln;
};
class exam: public student{
    protected:
        float maths;
        float oops;
    public:
        exam(){};
        exam(float,float);
        void setExam(float,float);
        void dispExam(void){
            std::cout << "marks in maths : "<<maths<< std::endl;
            std::cout << "marks in oops : "<<oops<< std::endl;
        };    
};
exam::exam(float m1,float m2){
    maths = m1;
    oops = m2;
};    
void exam::setExam(float m1,float m2){
    maths = m1;
    oops = m2;
};
class result : public exam{
    protected:
        float percent;
    public:
        result(){};
        void dispPer(void);
};
void result :: dispPer(){
    percent = (maths+oops)*100/200;
    std::cout << "percentage get : "<<percent << std::endl;
};
int main()
{
    result r1;
    r1.setStudent("Abhishek Bharti", 191901227);
    r1.dispStudent();
    r1.setExam(78.8,85);
    r1.dispExam();
    r1.dispPer();
    return 0;
}