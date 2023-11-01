#include <iostream>
using namespace std;
class base
{

public:
    int data1;
    void setdata(void)
    {
        data1 = 6700;
    }
    void getdata(void)
    {
        cout << "the value of data 1 " << data1 << endl;
    }
};
class derived : public base
{
    int data2;

public:
    void display()
    {
      data2=data1;
      cout<<"the value of data 2 " << data2 << endl;
    }
    void update(void)
    {
        data1 = 9800;
    }
};
int main()
{
    base b;
    b.setdata();
    b.getdata();

    derived d;
    d.setdata();
    d.display();

    d.update();
    d.getdata();
}