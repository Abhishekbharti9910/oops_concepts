/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
const int m=50;
class ITEMS{
    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void){count = 0;}
    void getItem(void);
    void displaySum(void);
    void Remove(void);
    void displayItems(void);
};
// assign value to itemCode and itemPrice
void ITEMS :: getItem(void){
    std::cout<<"Plz enter Item code to add : ";
    std::cin>>itemCode[count];
    
    std::cout<<"plz enter Item Price to add : ";
    std::cin>>itemPrice[count];
    count++;
}

void ITEMS :: displaySum(void){
    float sum=0;
    for(int i=0; i<count; i++){
        sum+=itemPrice[i];
    }
    std::cout<<"total amount to be paid : "<<sum;
}
void ITEMS :: Remove(void){
    int a;
    std::cout<<"plz enter item code of the item to remove : ";
    std::cin>>a;
    for(int i=0; i<count; i++){
        if(itemCode[i] == a){
            std::cout<<"found your product!"<<std::endl;
            itemPrice[i]=0;
        }
    }
}

void ITEMS :: displayItems(void){
    std::cout<<"\n\tCode\tPrice\n ";
    for(int i=0; i<count; i++){
        std::cout<<"\n\t"<<itemCode[i]<<"\t"<<itemPrice[i]<<std::endl;
    }
}

// main function starts here
int main()
{
    std::cout<<"Hello World \n";
        ITEMS order;
        order.CNT();
        int i;
    do{
        std::cout<<"To add item press :>>1"<<std::endl;
        std::cout<<"To sum of item price press :>>2"<<std::endl;
        std::cout<<"To display items press :>>3"<<std::endl;
        std::cout<<"To remove item press :>>4"<<std::endl;
        std::cout<<"To exit :>>5"<<std::endl;
        
        switch (i){
            case 1:
                order.getItem();
                break;
            case 2:
                order.displaySum();
                break;
            case 3:
                order.displayItems();
                break;
            case 4:
                order.Remove();
            case 5:
                break;
            default: std::cout<<"Entered wrong argumenets -> try again "<<std::endl;
        }
    }while(i!=5);

    return 0;
}
