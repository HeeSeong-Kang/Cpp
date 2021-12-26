#include <iostream>
using namespace std;

int main(void)
{
    int num[5];
    int result = 0;

    for (int i=0; i<5; i++)
    {
        cout << i+1 << " Enter number ";
        cin >> num[i];
    }
    
    for (int i=0; i<5; i++)
        result += num[i];

    cout << "Result " << result << endl;

    return 0;
}