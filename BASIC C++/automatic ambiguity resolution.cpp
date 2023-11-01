#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void print(void){
        cout<<"early morning jogging is good for health "<<endl;
    }
};
class derived{
    public:
    void print(void){
        cout<<"speaking in public is tough "<<endl;
    }
};
int main(){
    derived d;
    d.print();
    return 0;
}