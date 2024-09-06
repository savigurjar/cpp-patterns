#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // cout <<count++<< " ";
            cout << (i - 1) * 5 + j << " ";
        }
        cout << endl;
    }
}