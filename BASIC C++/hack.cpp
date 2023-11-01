#include<iostream>
using namespace std;
int findDigits(int n) {
int counter=0;
int p=n;
while(n!=0){
    int digit=n%10;
    if((p/digit)==0){
       counter=counter+1;
    }
    n=n/10;
}
return counter;
}

int main()
{
    int n=01;
    cout<<"the result is"<<findDigits(n);
    return 0;
}