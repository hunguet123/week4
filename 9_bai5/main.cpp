#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int randum(int &n)
{
    return rand() % n;
}

int main()
{
    srand(time(0));
    int n;
    cin >> n;
    cout << randum(n);
    return 0;
}
