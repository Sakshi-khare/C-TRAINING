//pointer
#include<stdio.h>
int main(){
    int a=10,*x;
    printf("%d",*x);
}
//call by value
#include<stdio.h>
int sum(int *x, int*y){
    *x=50;
    *y=50;
    int c=(*x)+(*y);
    return c;
}
int main(){
    int x=10;
    int y=20;
    int data=sum(&x,&y);
    printf("%d",data);
    printf("%d",x+y);
}
//
#include<stdio.h>
int sum(int x,int y){
    x=5;
    y=10;
    int sum=x+y;
    return sum;
}
int main(){
    int x=10;
    int y=20;
    int data=sum(x,y);
    printf("%d",data);
    printf("%d",x+y);
}
//
#include<stdio.h>
int main(){
int arr[5]={1,2,3,45,6};
int*p=arr;
for (int i = 0; i < 5; i++)
{
    printf("%d",*(p));
    p++;
}
}
//swapping two numbers in pointer
#include<stdio.h>
#include<stdio.h>
int main(){
int a=10,b=20;
int *p1=&a,*p2=&b;
printf("Before swapping:a=%d,b=%d\n",*p1,*p2);
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swapping:a=%d,b=%d\n",*p1,*p2);
}
//swapping of two no in pointer without using any 3rd varaible
//pointer ke sath swapping krne k liye bina kisi third varible k hum arithmatic operators (+,-,/)ka use kr skte hai
#include<stdio.h>
int main(){
int a=10,b=20;
int *p1=&a,*p2=&b;
printf("Before swapping:a=%d,b=%d\n",*p1,*p2);
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
printf("after swapping:a=%d,b=%d\n",*p1,*p2);
}
