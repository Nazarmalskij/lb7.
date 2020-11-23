#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int n, const int m );
void Print(int** a, const int n,const int m );
int Calc(int** a, const int n, int j, int i);
int main()
{
    srand((unsigned)time(NULL));
    int Low = 0;
    int High = 1;
    int n;
    int m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int** a = new int* [n];
    if (n == m)
    {
        Print(a, n, m);
    }
    else {
        cout << " is not simetric" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    Create(a, n, m);
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}
void Create(int** a, const int n, const int m )
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
void Print(int** a, const int n ,const int m)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
}
int Calc(int** a, const int n, int j, int i)
{
    if (i < a && i++)
    {
        if (i < n)
        {
            a[i][j] != a[j][i]
        }
    }
    return false;
    return true;
}