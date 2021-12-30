#include <iostream>
using namespace std;

class Calculator{
private:
    double num1;
    double num2;
    int add_cnt;
    int div_cnt;
    int min_cnt;
    int mul_cnt;
public:
    void Init();
    double Add(double num1, double num2);
    double Div(double num1, double num2);
    double Min(double num1, double num2);
    double Mul(double num1, double num2);
    void ShowOpCount();
};

void Calculator::Init()
{
    add_cnt = 0;
    div_cnt = 0;
    min_cnt = 0;
    mul_cnt = 0;
}

double Calculator::Add(double num1, double num2)
{
    add_cnt++;
    return num1 + num2;
}
double Calculator::Div(double num1, double num2)
{
    div_cnt++;
    return num1 / num2;
}
double Calculator::Min(double num1, double num2)
{
    min_cnt++;
    return num1 - num2;
}
double Calculator::Mul(double num1, double num2)
{
    mul_cnt++;
    return num1 * num2;
}

void Calculator::ShowOpCount()
{
    cout << "덧셈: " << add_cnt << " 뺄셈: " << min_cnt;
    cout << " 곱셈: " << mul_cnt << " 나눗셈: " << div_cnt << endl;
}

int main(void)
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 + 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 + 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cal.ShowOpCount();

    return 0;
}