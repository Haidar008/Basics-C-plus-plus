#include<iostream>
using namespace std;
class bank{
    public:
    bank(){}
    bank(int,int,int);
};
bank::bank(int p,int r,int t){
    int amount=p;
    for(int i=1;i<=t;i++){
        float interest=(p*r*t)/100;
        amount=amount+interest;
        p=amount;
    }
    cout<<"the amount after "<<t<<" year is "<<amount<<endl;
}
int main(){
    bank b1;
    int p,y,r;
    cout<<"enter the principal,rate and year "<<endl;
    cin>>p>>y>>r;
    b1=bank(p,y,r);

}