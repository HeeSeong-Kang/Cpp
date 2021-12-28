#include <iostream>
using namespace std;

void AddVal(int &ref)
{
    ref++;
}

void ChangeSign(int &ref)
{
    ref = -ref;
}

int main(void)
{
    int val = 10;

    AddVal(val);
    cout << val << endl;

    ChangeSign(val);
    cout << val << endl;
   
    return 0;
}