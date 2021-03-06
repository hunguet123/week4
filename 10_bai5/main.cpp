#include <iostream>
#include <math.h>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void tong_ba_so(vector <int> &a)
{
    int n = a.size();
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
         int l = i + 1;
         int r = n - 1;
         while (l < r)
         {
             int sum = a[i] + a[l] + a[r];

             if ( sum == 0 ) {
                cout << a[i] << " " << a[l] << " " << a[r] << endl;
                l++;
                r--;
             }
             else if (sum < 0) l++;
             else if (sum > 0) r--;
         }
    }
}

int main()
{
    srand(time(0));

    int n = 10;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int temp = rand() % 49;
        a.push_back(temp);
        cout << temp << " ";
    }
    cout << endl;
        sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
         int l = i + 1;
         int r = n - 1;
         while (l < r)
         {
             int sum = a[i] + a[l] + a[r];
            int thuong = sum / 25;
             if ( sum % 25 == 0 && sum - thuong*25 == 0 ) {
                cout << a[i] << " " << a[l] << " " << a[r] << endl;
                l++;
                r--;
             }
             else if (sum - thuong* 25 < 0) l++;
             else if (sum - thuong* 25 > 0) r--;
         }
    }
    return 0;
}

