// #include<stdio.h>
// // using namespace std;
// void reverse(int arr[],int n);
// void printer(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5};
//     reverse(arr,5);
//     printer(arr,5);
//     return 0;
// }
// void printer(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// void reverse(int arr[],int n){
//     for(int i=0;i<n/2;i++){
//         int firstvalue = arr[i];
//         int secondvalue = arr[n-i-1];
//         arr[i]=secondvalue;
//         arr[n-i-1]-firstvalue;
//     }
// }

#include<stdio.h>
int main(){
    int area;
    printf("enter 1 if you want to print area of traingle and \n enter 2 if you want to print area of circle ");
    scanf("%d",&area);
    switch(area){
        case 1: {
            int breadth,height;
            printf("enter breadth and height:- ");
            scanf("%d%d",&breadth,&height);
            int areaoftraingle = (breadth*height)/2;
            printf("area of traingle is:-  %d",areaoftraingle);
            break;
        }
        case 2:{
             int radius;
             printf("enter radius of a circle:- ");
             scanf("%d",&radius);
             int areaofcircle = (radius*radius)*(22/7);
             printf("area of circle:- %d",areaofcircle);
             break;
        }
        default : {
            printf("invalid number");
        }
    }
    return 0;
}
