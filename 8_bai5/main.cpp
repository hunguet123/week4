#include <iostream>
#include <math.h>

using namespace std;

int rnd( float &n);
int rnd2(float &n);
int main()
{
    float n;
    cin >> n;
    cout << rnd(n) << endl;
    cout << rnd2(n);
    return 0;
}

int rnd(float &n)
{
    int gt_duoi = ceil(n);
    int gt_tren = floor(n);
    if (n - gt_duoi > gt_tren - n) return gt_duoi;
    return gt_tren;
}

int rnd2(float &n)
{
    int gt = int(n);
    if (n - gt >= 0.5 ) return gt + 1;
    return gt;
}
