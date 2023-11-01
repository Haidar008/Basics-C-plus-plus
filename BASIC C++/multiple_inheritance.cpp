#include<iostream>
using namespace std;
class base1{
    protected:
    int data1;
    public:
    void setdata1(int v){
        data1=v;
    }
};
class base2{
protected:
    int data2;
    public:
    void setdata2(int v){
        data2=v;
    }
};
class base3{
protected:
    int data3;
    public:
    void setdata3(int v){
        data3=v;
    }
};
class derived:public base1,public base2,public base3{
    private:
    int data4;
    public:
    void setdata4(int v){
        data4=v;
    }
    void display(){
        cout<<"the value of data1 is "<<data1<<endl;
        cout<<"the value of data2 is "<<data2<<endl;
        cout<<"the value of data3 is "<<data3<<endl;
        cout<<"the value of data4 is "<<data4<<endl;
        cout<<"the sum of these values is"<<data1+data2+data3+data4<<endl;

    }
};
int main(){
    derived der;
    der.setdata1(56);
    der.setdata2(67);
    der.setdata3(46);
    der.setdata4(20);
    der.display();
}