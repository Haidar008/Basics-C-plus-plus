#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    int salary;
    void setdata(int inpid, int sal)
    {
        id = inpid;
        salary = sal;
    }
    void display()
    {
        cout << "The salary is " << salary << " "
             << "and the id is " << id << endl;
    }
};
class programmer :public employee
{
};
int main()
{
    employee harry, rohan;
    harry.setdata(12, 90000);
    rohan.setdata(15, 80000);
    harry.display();
    rohan.display();
    programmer parwez;
    parwez.setdata(100, 25000);
    parwez.display();
    return 0;
}