#include <iostream>
using namespace std;

int main(void)
{
    char name[100];
    char phone[100];

    cout << "Name ";
    cin.getline(name, 100, '\n');
    cout << "Phone ";
    cin >> phone;

    cout << name << endl;
    cout << phone << endl;
    
    return 0;
}