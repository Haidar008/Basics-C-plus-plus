/*
    IMPORTANT POINTS ABOUT CONSTRUCTOR IN DERIVED CLASS:

    1> we can use constructor in derived class
    2> if there is no argument in base class constructor  then there is no need of
       constructor in derived class
    3> if base class constructor has one or more argument the derived class constructor
        is used to pass argument to base class constructor
    4> base class constructor is executed first before derived class
    5> in multiple inheritance base classes are constructed in the order they are
        declared
    6> in multilevel inheritance base classes are executed in the level of inheritance
    7> virtual base class constructor are executed before non-virtual base class

*/
// SYNTAX OF DERIVED CLASS CONSTRUCTOR:
/*derived_constructor(arg1,arg2,arg3,arg4,arg5,arg6):base1_constructor(arg1,arg2),base2_constructor(arg3,arg4)
{
    code of derived constructor;
}
*/

// EXAMPLES OF CONSTRUCTOR IN DERIVED CLASSS:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int a, b;

public:
    base1(int v1, int v2)
    {
         cout << "base 1 constructor called " << endl;
        a = v1;
        b = v2;
    }
    void print1(void)
    {
       
        cout << "a=" << a << " and "
             << "b=" << b << endl;
    }
};
class base2
{
protected:
    int c, d;

public:
    base2(int s1, int s2)
    {
         cout << "base 2 constructor called " << endl;
        c = s1;
        d = s2;
    }
    void print2(void)
    {
        cout << "c=" << c << " and "
             << "d=" << d << endl;
    }
};
class derived:public base2,public virtual base1
{
    private:
    int e,f;
    public:
    derived(int a,int b,int c,int d,int l,int m):base1(a,b),base2(c,d){
        cout<<"derived constructor called"<<endl;
        e=l;
        f=m;
    }
    void display(void){
        cout << "e=" << e << " and "
             << "f=" << f << endl;
    }
};
int main()
{
    derived object(12,23,45,43,67,89);
    object.print1();
    object.print2();
    object.display();
}