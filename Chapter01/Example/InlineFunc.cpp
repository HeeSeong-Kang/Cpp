#include <iostream>

template <typename T>    // 자료형 데이터 손실 방지
inline T SQUARE(T x)
{
    return x*x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(12) << std::endl;
    std::cout << SQUARE(3.3) << std::endl;
    return 0;
}
