#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int ,int );
    void display(void);
};
complex::complex(int v1,int v2){
    a=v1;
    b=v2;
}
void complex::display(void){
    cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
}
int main(){
    complex c1(3,4);
    c1.display();
    return 0;
}