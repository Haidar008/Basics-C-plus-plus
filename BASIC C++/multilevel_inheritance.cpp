#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int rollno;
    string name;

public:
    void setdata(int, string);
    void getdata(void);
};
void student::setdata(int r, string n)
{
    rollno = r;
    name = n;
}
void student::getdata(void)
{
    cout << "The name of student is " << name << " and his roll number is " << rollno << endl;
}
class subjects : public student
{
protected:
    float physics;
    float maths;

public:
    void setmarks(float, float);
    void getmarks(void);
};
void subjects::setmarks(float p, float m)
{
    physics = p;
    maths = m;
}
void subjects::getmarks(void)
{
    cout << "The marks in physics is " << physics << " and in maths is " << maths << endl;
}
class result : public subjects
{
protected:
    float percentage;
    void report(void)
    {
        cout << "The percentage of the student is " << (maths + physics) / 2 << endl;
    }
};
class remarks : public result
{
public:
    void display()
    {
        getdata();
        getmarks();
        report();
        if (percentage > 40)
        {
            cout << "He has been promroted " << endl;
        }
        else
        {
            cout << "He has been detained " << endl;
        }
    }
};
int main()
{
    remarks rem;
    rem.setdata(88, "sohan");
    int p, m;
    cout << "enter the marks of physics and maths scored by the student " << endl;
    cin >> p >> m;
    rem.setmarks(p, m);
    rem.display();
    return 0;
}