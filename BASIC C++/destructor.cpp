#include<iostream>
using namespace std;
int count=0;
class number{
    public:
    /*void initcounter(){
        count=0;
    }*/
    number(){
        count++;
        cout<<"constructor called for object number "<<count<<endl;
    }
    ~number(){
        cout<<"object no "<<count<<"destroyed"<<endl;
        count--;
    }
};
int main(){
    number n1;
    {
        number n2,n3;
    }
    return 0;
}