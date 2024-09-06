
#include<iostream>
#include<math.h>
using namespace std;
int main(){
//find area of traingle
//int area , height,base;
//cout<<"enter height";
//cin>>height;
//cout<<"enter base"<<endl;
//cin>>base;
//area = (height*base)/2;
//cout<<"area of triangle:- "<<area;
//return 0;

//peremeter of rectangle
//int p,length,breadth;
//cout<<"enter length";
//cin>>length;
//cout<<"enter breadth";
//cin>>breadth;
//p = 2*(length+breadth);
//cout<<"peremeter of rectangle is:- "<<p<<endl;
//return 0;

//sum of first n natural numbers
int num ;
cout<<"enter number ";
cin>>num;
int sum = (num*(num+1))/2;
cout<<"sum of n natural numbers :- "<<sum;
return 0; 

//roots of quartatic equation
//int a , b, c;
//cout<<"enter a ,b and c :- ";
//cin>>a>>b>>c;
//int r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
//int r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
//cout<<"root of quartaic equation:- "<<r1<<r2<<endl;
//return 0;

//area of circle
//float r , area;
//cout<<"enter radius:- ";
//cin>>r;
////area = (22*r*r)/7;
//area = 3.1425f*r*r;
//cout<<"area of circle:- "<<area;
//return 0;

//calculate distance
//int v,u,a;
//cout<<"enter final velocity:- ";
//cin>>v;
//cout<<"enter intial velocity:- ";
//cin>>u;
//cout<<"enter accelaration:- ";
//cin>>a;
////int dist = (v*v-u*u)/(2*a);
//int dist = (pow(v,2)-pow(u,2))/(2*a);
//cout<<"distance is:- "<<dist<<endl;
//return 0;

//calculate simple interest
//P -- principle amount
//
//T -- time
//
//R -- rate of interest
//int P ,R,T;
//cout<<"enetr principle amount:- ";
//cin>>P;
//cout<<"enter rate of interesr:- ";
//cin>>R;
//cout<<"enter time:- ";
//cin>>T;
//int interest = P*R*T/100.0;
//cout<<"simple interset is :- "<<interest<<endl;
//return 0;

//volume of cyclinder
//float radius,height;
//cout<<"enter radius of cylinder:- ";
//cin>>radius;
//cout<<"enter height of cylinder:- ";
//cin>>height;
//float volume = 3.14*radius*radius*height;
//cout<<"volume of cylinder is :- "<<volume<<endl;
//return 0;

//distance of two points
//int x1,x2,y1,y2;
//cout<<"enter first points:- ";
//cin>>x1>>y1;
//cout<<"enter second points:- ";
//cin>>x2>>y2;
//int dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//cout<<"distance between two points:- "<<dist;
//return 0;



////check factor ,sum of factor, perfect number , prime
//
//int n,sum=0,count=0 ,i;
//cout<<"enter number:- ";
//cin>>n;
//for(i=1;i<=n;i++){
//	if(n%i==0){
//		cout<<"factors are:- "<<i<<"\n";
//		sum += i;
//		count++;
//	}
//}
//cout<<"sum of factor is:- "<<sum<<endl;
//cout<<"number of factor is:- "<<count<<endl;
//if(2*n==sum){
//
//	cout<<n<<"number is perfect number"<<endl;
//}
//
//else{
//	cout<<"number is not perfect"<<endl;
//}
//	 if(count==2){
//	cout<<n<<"number is prime"<<endl;
//}
//else{
//	cout<<n<<"number is not prime"<<endl;
//}
//return 0;

//digits count
//int n, count = 0;
//cout<<"enter number:- ";
//cin>>n;
//while(n>0){
//	int r = n%10;
//	count++;
//	n = n/10;	
//}
//cout<<count;
//return 0;

// armstrong number 
// int n ,sum = 0;
// cout<<"enter number:- ";
// cin>>n;
// int m = n;
// while(n>0)
// {
//     int r = n%10;
//     n = n/10;
//     sum += r*r*r;
// }
// if(m==sum)
// {
//     cout<<"number is armstrong:- "<<m<<"="<<sum;
// }
// else{
//     cout<<"number is not armstrong";
// }
// return 0;

// reverse number and palindrome
// int n , rev = 0;
// cout<<"enter number:- ";
// cin>>n;
// int m = n;
// while(n>0){
//     int r = n%10;
//     n = n/10;
//     rev = rev*10+r;
// }
// cout<<"reverse of number is:- "<<rev<<endl;
// if(m==rev){
//     cout<<"number is palindrome";
// }
// else{
//     cout<<"number is not palindrome";
// }
// return 0;

// display a digits rev
//  int n,digit;
//  cin>>n;
//  while(n>0){
//     digit = n%10;
//     n = n/10;
//     cout<<digit<<" ";
//  }

// gcd of 2 numberrs
int m,n;
cout<<"enter 2 number:- ";
cin>>m>>n;
while(m!=n){
    if(m>n){
        m = m-n;
    }
    else if(n>m){
        n = n-m;
    }
}
cout<<"GCD is:- "<<m;
return 0;
}
