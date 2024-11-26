#include <stdio.h>
#include <conio.h>
#define PI 3.1415
int main (){
    int a,s;
    printf("enter a value");
    scanf("%d",&a);
    s=a*2*PI;
    printf("circumference is %d",s);
    getch();
    return 0;
}