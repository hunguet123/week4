#include <iostream>

using namespace std;

int factorial(int x)
{
    cout << "x = " << x << " at " << &x << endl;
    if (x > 1) {
    return x * factorial(x-1);
    }
    else return 1;
}

int main()
{
    int x = 6;
    factorial(x);
    return 0;
}

// dia chi khong theo thu tu
