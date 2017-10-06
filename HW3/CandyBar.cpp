#include <iostream>

using namespace std;

struct candyBar{
    char name[25];
    double mass;
    double calories;

    void print(){
        cout<<name<<"\n"<<mass<<"\n"<<calories<<endl;
    }

};
int main() {
    candyBar snack={"Mocha Munch", 2.3, 350};
    snack.print();
    return 0;
}
