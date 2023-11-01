#include <iostream>
using namespace std;
class base
{
public:
    int data1;
    int data2;
    void setdata()
    {
        data1 = 6;
        data2 = 90;
    }
    void getdata()
    {
        cout << "the value of data 1 and data 2 is " << data1 << " and " << data2 << " respectively " << endl;
    }
    void result()
    {
        cout << "All the data are successfully accessed " << endl;
    }
};
class derived : public base
{
    int data3;

public:
    int data4;
    void process()
    {
        data3 = (data1 + data2);
        data4 = ((data1 * data2) + data2);
    }
    void display(void)
    {
        cout << "the value of data3 and data4 are " << data3 << " and " << data4 << " respectively " << endl;
    }
    void update(void)
    {
        data1 = 56;
        data2 = 98;
    }
};
int main()
{
    base b;
    b.setdata();
    b.getdata();

    derived d;
    d.process();
    d.display();
    d.result();

    d.update();
    d.getdata();

    return 0;
}