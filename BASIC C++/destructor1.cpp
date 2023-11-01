#include <iostream>
using namespace std;
int count = 0;
class test
{
public:
    test()
    {
        count++;
        cout << "test " << count << "stated" << endl;
        cout << endl;
    }

    ~test();
};
test::~test()
{
    cout << "Test " << count << "ended" << endl;
    cout << endl;
    count--;
}
int main()
{
    test t1, t2, t3, t4, t5;
    return 0;
}