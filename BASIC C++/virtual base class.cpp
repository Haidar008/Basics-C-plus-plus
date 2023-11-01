#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_no(int r){
        roll_no=r;
    }
    void get_no(void){
        cout<<"your roll number is "<<roll_no<<endl;
    }
};
class test:virtual public student{//both the way of declaration are correct
    protected:
    int physics;
    int maths;
    public:
    void set_marks(int p,int m){
        physics=p;
        maths=m;
    }
    void get_marks(void){
        cout<<"your result is:"<<endl
            <<"physics="<<physics<<endl
            <<"maths="<<maths<<endl;
    }
};
class sports:public virtual student{//both the way of declaration are correct
    protected:
    int scores;
    public:
    void set_scores(int s){
        scores=s;
    }
    void get_scores(void){
        cout<<"your scores is "<<scores<<endl;
    }
};
class result:public test,public sports{
    public:
    void display(void){
        get_no();
        get_marks();
        get_scores();
    }
};
int main(){
    result res;
    res.set_no(118);
    res.set_marks(78,98);
    res.set_scores(168);
    res.display();
    return 0;
}