#include<iostream>
using namespace std;
int main()
{ 
    /*
    declare string


    char S[10] = "hello";
    cout<<S<<endl;

//     char S[] = "hello";
//     cout<<S<<endl;

char v[]={'h','e','l','l','o','\0'};
cout<<v<<endl;

char d[]={65,66,67,68,69,'\0'};
cout<<d<<endl;

char *t = "hello";
cout<<t<<endl; */

// or 
// string v = "taetae";
// cout<<v;

// char s[30];
// cout<<"enter name:- ";
// cin>>s;
char s[50];
cout<<"enter ur name";
// cin.get(s,30);
cin.getline(s,50);
cout<<"hai sir captain"<<s;
return 0;
}