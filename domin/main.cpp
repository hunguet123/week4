#include <iostream>
#include <vector>
using namespace std;

void result(char a[][10], int m, int n)
{
    for (int i=0;i<m;i++)
     for (int j=0;j<n;j++)
     {   if (a[i][j]=='*') cout<<"* ";
          else
          {
            int dem=0;
    if (a[i-1][j-1]=='*') dem++;
    if (a[i-1][j]=='*') dem++;
    if (a[i-1][j+1]=='*') dem++;
    if (a[i][j-1]=='*') dem++;
    if (a[i][j+1]=='*') dem++;
    if (a[i+1][j-1]=='*') dem++;
    if (a[i+1][j]=='*') dem++;
    if (a[i+1][j+1]=='*') dem++;
    cout <<  dem << " ";
          }
        if (j==n-1) cout<<endl;
     }
}

int main ()
{
    int m,n;
    cin>>m>>n;
    char a[m][10];
    for (int i=0;i<m;i++)
     for (int j=0;j<n;j++)
    {
        cin>>a[i][j];

    }
    result(a,m,n);
     return 0;
}
