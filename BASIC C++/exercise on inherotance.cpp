#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class simple_calculator{
    protected:
    int a,b;
    public:
    void input1(int v1,int v2){
        a=v1;
        b=v2;
    }
    void display1(void){
        cout<<"the addition of two number is "<<a+b<<endl;
        cout<<"the subtraction of two number is "<<a-b<<endl;
        cout<<"the multiplication of two number is "<<a*b<<endl;
        cout<<"the division of two number is "<<a/b<<endl;
        cout<<"the exponent of two number is "<<pow(a,b)<<endl;
    }
};
class scientific_calculator{
    protected:
    int num;
    public:
    void input2(int v){
        num=v;
    }
    void display2(void){
        cout<<cos(num)<<endl;
        cout<<sin(num)<<endl;
        cout<<log(num)<<endl;
        cout<<tan(num)<<endl;
    }
};
class hybrid_calculator:public simple_calculator,public scientific_calculator{

};
int main(){
    hybrid_calculator hc;
    hc.input1(6,12);
    hc.input2(60);
    hc.display1();
    hc.display2();
    return 0;
}