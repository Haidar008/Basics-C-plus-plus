#include<iostream>
using namespace std;
class base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    
};
class derived:protected base{
    public:
    void setdata(int y,int z){
        b=y;
        c=z;
    }
    void getdata(){
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main(){
    derived d;
    d.setdata(12,34);
    d.getdata();
    //cout<<d.b<<endl; This cannot be done because b and c is protecetd memeber of class derived;
    //cout<<d.c<<endl;
}