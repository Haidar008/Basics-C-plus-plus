#include<iostream>
using namespace std;
class y;
class x{
    int data1;
friend void exchange(x&a,y&b);
    public:
    void setdata(int a){
        data1=a;
    }
    void print(){
    cout<<"the value of a is "<<data1<<endl;
    }
};
class y{
    int data2;
    friend void exchange(x&a,y&b);
    public:
    void setdata(int b){
        data2=b;
    }
    void print(){
    cout<<"the value of b is "<<data2<<endl;
    }
    
};
void exchange(x&a,y&b){
    int temp=a.data1;
    a.data1=b.data2;
    b.data2=temp;
}
int main(){
    x c1;y c2;
    c1.setdata(56);
    c1.print();
     c2.setdata(98);
    c2.print();
    cout<<"afetr exchange"<<endl;
     c1.print();
     c2.print();

}