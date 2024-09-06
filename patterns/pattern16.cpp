#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
           
//             char ch = 'A'+i+j-2;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// other method 
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         char start = 'A'+i-1;
         for(int j=1;j<=n;j++)
         {
            cout<<start<<" ";
            start++;
         }
         cout<<endl;
    }
    return 0;
}