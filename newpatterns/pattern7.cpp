#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    // for (int i=1;i<=n;i++ )
    // {
       
    //     for (int j=1;j<=n-(i-1);j++)

    //     {
    //         cout << j<< " ";
    //     }
    //     cout << endl;
    // }
    for (int i=n;i>=1;i-- )
    {
       
        for (int j=1;j<=i;j++)

        {
            cout <<j<< " ";
        }
        cout << endl;
    }
    return 0;
}