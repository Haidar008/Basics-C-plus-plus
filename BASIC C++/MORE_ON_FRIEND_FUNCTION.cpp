#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
    void setdata(int a){
        data=a;
    }
    void print(void){
        cout<<"the value of a is"<<data<<endl;
    }
    friend void add(x,y);
};
class y{
    int bata;
    public:
    void setdata(int b){
        bata=b;
    }
    void print(void){
        cout<<"the value of b is"<<bata<<endl;
    }
    friend  void add(x,y);
};
void add(x o1,y o2){
    cout<<"the addition  is "<<o1.data+o2.bata<<endl;
}
int main(){
    x c1;
    y c2;
    c1.setdata(34);
    c2.setdata(67);
    c1.print();
    c2.print();
    add(c1,c2);

}