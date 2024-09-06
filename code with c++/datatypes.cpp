#include<iostream>
using namespace std;
//int main(){
//	char x =127;
////	++x;
//x++;
//	cout<<(int)x<<endl;
//	return 0;
//}

//enum day{mon, tue, wed,thu,fri,sat,sun};
int main(){
//	day d;
//	d = mon;
//	cout<<d;
//	return 0;
// int m =15;
// cout<<(m%2+3);
// char x = 'A';
// x+=32;
// cout<<x;
// int a = 11, b= 9 ; 
// cout<<(a|b);
// int  ba =25;
// cout<<(~ba);

        int integer;
    long long_integer;
    char character;
    float float_num;
    double double_num;
 scanf("%d %ld %c %f %lf", &integer, &long_integer, &character, &float_num, &double_num);

   
    printf("%d\n", integer);
    printf("%ld\n", long_integer);
    printf("%c\n", character);
    printf("%.3f\n", float_num); 
    printf("%.9lf\n", double_num);
}

