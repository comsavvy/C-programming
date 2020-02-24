#include <iostream>
#include <string>
using namespace std;

class banking{
    public:
    void setInitialMoney(int i){
    initial_money= i;
    }
    void addmoney(int a){
    initial_money += a;
    }
    void removeMoney(int r){
    initial_money -= r;
    }
    void details(){
    cout<<"Your balance is "+initial_money<<endl;
    }
    private:
        int initial_money;
};


int main()
{
    banking b;
    b.setInitialMoney(4000);
    b.details();
    return 0;
}
