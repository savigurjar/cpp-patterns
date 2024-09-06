#include<iostream>
#include<cstring>
using namespace std;
int main()
{
// char v[30]="taetae kim";
// cout<<strlen(v)<<endl;
// char *s ;
// cout<<"enter string:- ";
// cin.getline(s,100);
// cout<<"length of string:- "<<strlen(s)<<endl;
// return 0;

// char s[30]="tata";
// char v[12]="dviolet";
// // strcat(s,v);
// strncat(s,v,4);
// cout<<s<<endl;

// char s[30]="kimtae";
// char v[12]="";
// strncpy(s,v,3);
// cout<<v<<endl;
// return 0;

// char s[30]="taesvitae";
// char v[12]="svi";
// cout<<strstr(s,v)<<endl;
// return 0;

// char s[30]="kim taehyung";
// cout<<strchr(s,'tae')<<endl;

// char s1[30]="hello";
// char s1[30]="hello";
// cout<<strcmp(s1,s2)<<endl;

char s1[30]="1995";
char s2[30]="2004.13";
long int x = strtol(s1,NULL,10);
float y =strtof(s2,NULL);
cout<<x<<endl<<y;
return 0;

}