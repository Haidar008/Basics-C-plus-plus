#include<iostream>
#include<cmath>
using namespace std;
class distance{
int x1, x2, y1, y2;
public:
    distance(){
        int dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        cout<<"the distance is "<<dis<<endl;
    }
};
int main(){
    distance d;
    return 0;
}