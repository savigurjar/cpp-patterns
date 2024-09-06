#include<iostream>
using namespace std;
int main(){
    // int v = 30;
    // int *p = &v;
    // cout<<v<<endl;
    // cout<<&v<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;

    // int *p = new int[5];
    // p[0]=12;
    // p[1]=30;
    // cout<<p[1]<<endl;
  /*  // delete []p;
    // p = NULL;
    // p = nullptr;*/


// int size;
// cout<<"enter n of element:- ";
// cin>>size;
// int A[size];
// cout<<sizeof A<<endl;

// int *p = new int[20];
// delete []p;
// p = new int [40];  
//     return 0;

// arithmetic pointer 
// int A[5]={2,3,4,5,6};
// int *p = A;
// int *q = &A[3];
// p++;
// // int d =p-q; //negative
// int d =q-p;
// cout<<d<<endl;
// cout<<*p;

// reference 
// int x =12;
// int &y =x;
// cout<<y<<" "<<x<<endl;

// int *p;
// double *q;
// int x = sizeof(p);
// int y= sizeof(q);
// cout<<x<<y;
// int A[]={2,4,6,8,10,12};
// int *p = &A[3];
// cout<<p[-2];

int x =10;
int *y = &x;
int *&z = y;
cout<<z;
}