#include<iostream>
using namespace std;
class base1{
    public:
    void greet(void){
        cout<<" Good morning "<<endl;
    }
};
class base2{
    public:
    void greet(void){
        cout<<" Hello world "<<endl;
    }
};
class derived:public base1,public base2{
    public:
    void greet(void){
        base2::greet();
    }
};
int main(){
    base1 b1;
   // b1.greet();
    base2 b2;
    //b2.greet();
    derived d;
    d.greet();
}