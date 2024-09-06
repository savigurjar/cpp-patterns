   #include<iostream>
   using namespace std;

   int main(){
    int N;
    if(N%400==0)
        {
            return true;
        }
        else if(N%4==0 && N%100!=0)
        {
            return true;
        }
        else
        {
            return false;
        }}