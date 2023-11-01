#include<iostream>
using namespace std;
class add{
    int a,b,c;
    public:
    add(int x,int y,int z=98){
        a=x;
        b=y;
        c=z;
        cout<<a+b+c;
    }
};
int main(){
    add a(3,48);
    return 0;
}