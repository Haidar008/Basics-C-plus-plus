#include<iostream>
using namespace std;
class student{
    int marks;
    int roll;
    int age;
    public:
    string name="Haidar";
    student(){
        cout<<"your names is"<<name<<endl;
    }
    student(int a,int m){
        marks=m;
        age=a;
        cout<<age<<" "<<marks;
    }
    student(int r){
        roll=r;
        cout<<roll;
    }
};
int main(){
    student s();
    return 0;
}