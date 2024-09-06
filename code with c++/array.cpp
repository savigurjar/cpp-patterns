#include <iostream>
using namespace std;
int main()
{
	// int A[] = {2,4,6,8,10,12};
	// for(int x:A)
	// cout<<x<<endl;
	// return 0;

	// float B[] = {5.7f,6.8f,4,5,6};
	// for(auto y:B)
	// cout<<y<<endl;
	// return 0;

	// print sum of array
	// int n;
	// int A[n],sum = 0;
	// cout<<"enter number:- "<<endl;
	// cin>>n;
	// for(int i = 0;i<=n;i++){
	// 	sum += i;

	// }
	// cout<<"sum of array:- "<<sum;
	// return 0;

	// or
	// int A[7]={1,2,3,4,5,6,7};
	// int sum = 0;
	// for(int i=0;i<7;i++){
	// 	sum += A[i];
	// }
	// cout<<sum;
	// return 0;

	// find max element for array
	// int A[7]={13,10,54,86,34,9,53};
	// int max, n=7;
	// max = A[0];
	// for(int i=0;i<7;i++){
	// 	if(A[i]>max){
	// 		max = A[i];
	// 	}
	// }
	// cout<<"max is:- "<<max<<endl;
	// return 0;

	// linear search
	// int A[10] = {12, 30, 45, 2, 6, 7, 4, 89, 67};
	// int key;
	// cout << "enter key:- ";
	// cin >> key;
	// for (int i = 0; i < 10; i++)
	// {
	// 	if (key == A[i])
	// 	{
	// 		cout << "key element found at" << i;
	// 		exit(0);
	// 	}
	// }
	// cout<<"key is not found"<<endl;
	// return 0;

	// binary search
	// int A[10] = {12, 30, 45, 95, 113, 448, 536, 603, 702, 812};
	// int key;
	// // low=l, high = h index starting and last point
	// int l = 0, h = 9;
	// cout << "enter key:- ";
	// cin >> key;
	// while (l <= h)
	// {
	// 	int mid = (l + h) / 2;
	// 	if (key == A[mid])
	// 	{
	// 		cout << "found at:- " << mid;
	// 		return 0;
	// 	}
	// 	else if (key < A[mid])
	// 	{
	// 		h = mid - 1;
	// 	}
	// 	else
	// 	{
	// 		l = mid + 1;
	// 	}
	// }
	// cout << "not found" << endl;

	// nested for loop
	// int n;
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=n;j++){
	// 		cout<<"("<<i<<","<<j<<")";
	// 	}
	// 	cout<<endl;
	// }
	// return 0;

	// 2q
	// int n;
	// int count = 1;
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=n;j++){
	// 		cout<<count<<" ";
	// 		count++;
	// 	}
	// 		cout<<endl;
	// }

	// 3q
	// int n;
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=i;j++){
	// 		cout<<"*"<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// return 0;

	// reverse
	// int n;
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	for(int j=1; j<=n;j++){
	// 		if(i>j){
	// 			cout<<" ";
	// 		}
	// 		else{
	// 			cout<<"*";
	// 		}
	// 	}
	// 	cout<<endl;
	// }
	// return 0;

	// 4q
	// int n;
	// cin >> n;
	// for (int i = 0; i <= n; i++)
	// {
	// 	for (int j = 0; j <= n; j++)
	// 	{
	// 		if (i + j > n - 1)
	// 		{
	// 			cout << "*";
	// 		}
	// 		else
	// 		{
	// 			cout << " ";
	// 		}
	// 	}
	// 	cout << endl;
	// }
	// return 0;


	// int n;
	// cin >> n;
	// for (int i = 0; i <= n; i++)
	// {
	// 	for (int j = 0; j <= n; j++)
	// 	{
	// 		if (i + j > n - 1)
	// 		{
	// 			cout << "*"<<" ";
	// 		}
	// 		else
	// 		{
	// 			cout << " ";
	// 		}
	// 	}
	// 	cout << endl;
	// }
	// return 0;

	// 2d array
	// int A[2][3]={{2,5,9},{6,7,15}};
	// for(int i=0;i<2;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout<<A[i][j];
	// 	}
	// 	cout<<endl;
	// }

	// matrix 2x3 addition
	// int A[2][3]={{2,5,6},{7,8,9}};
	// int B[2][3]={{1,3,4},{12,30,28}};
	// int C[2][3];
	// for(int i=0;i<2;i++){
	// 	for(int j=0;j<3;j++){
	// 		C[i][j]=A[i][j]+B[i][j];
	// 	}
	// }
	// for(int i=0;i<2;i++){
	// for(int j=0;j<3;j++){
	// 	cout<<C[i][j]<<" ";
	// }
	// cout<<endl;}

	//  int A[2][3]={{2,5,6},{7,8,9}};
	//  int B[2][3]={{1,3,4},{12,30,28}};
	//  int C[2][3];
	//  for(int i=0;i<2;i++){
	// 	for(int j=0;j<3;j++){
	// 		C[i][j]=A[i][j]*B[i][j];
	// 	}
	//  }
	//  for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout<<C[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	//  }

	//  int A[2][3];
	// //  &reference 
	// for(auto& x:A){
	// 	for(auto& y:x){
	// 		cin>>y;
	// 	}
	// 	cout<<endl;
	// }
	// for(auto& x:A){
	// 	for(auto& y:x){
	// 		cout<<"y"<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// return 0;

	// average in array 
	// int n,i;
	// float num[100],sum=0.0,average;
	// cout<<"enter the number of element: ";
	// cin>>n;
	// for(i=0;i<n;++i){
	// 	cout<<i+1<<"enter number: ";
	// 	cin>>num[i];
	// 	sum += num[i];
	// }
	// average = sum/n;
	// cout<<"average = "<<average;
	// return 0;
	
	
	 }

