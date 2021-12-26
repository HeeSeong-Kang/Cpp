#include <iostream>
using namespace std;

int main(void)
{
    int money;

    while(1)
    {
        cout << "Sales amount(-1 to end): ";
        cin >> money;

        if (money == -1)
            return 0;

        cout << "Salary: " << 50+money*0.12 << endl;
    }

    return 0;
}