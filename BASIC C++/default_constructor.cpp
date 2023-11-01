#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
     string name="haidar";
     int roll=88;
     int marks=98;
    student(void);
};
student::student(void){
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<marks<<endl;
    }
int main(){
    student s;
    return 0; 
}