#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            char ch = 'a' + (j - 1);
            cout << ch << " ";
        }
        cout << endl;
    }
}