//CHAPTER 5 : Functions and Recurssion
// syntax
#include<stdio.h>
void printHello(); // function decalaration
int main(){
printHello();      // function call
}
void printHello(){   //function defination
    printf("Hello");
}
// Ques 27 : write 2 functions one to print hello and second to print good bye
#include<stdio.h>
void Hello();
void goodbye();
int main(){
    Hello();
    Hello();
    goodbye();
    goodbye();
}
void Hello(){
    printf("Hello\n");
}
void goodbye(){
    printf("goodbye\n");
}
//Ques 28 : print namaste if user is indian and bonjour if user is french
#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("enter f for french & i for indian :");
    char ch;
    scanf("%c",&ch);

    
        namaste();
   
    return 0;
    
}
void namaste(){
    printf("Namaste\n");
    bonjour();
}
void bonjour(){
    printf("bonjour\n");
}
//
#include<stdio.h>
int main(){
    int sum(int a, int b);
    int a,b;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    int s= sum(a,b);
    printf("sum is %d\n",s);
}
int sum(int x, int y){
    return x + y;
}
//
#include<stdio.h>
int sum(int a, int b);
void printTable(int n);
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    printTable(n); // argument/actual parameter
}
int sum(int x,int y){
return x + y;
}
void printTable(int n){    // parameter

    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",i*n);
    }
    
}
// changes to parameter in functions don't change the values in calling function.
#include<stdio.h>
void calculatePrice(float value);
int main(){
     float value=100.0;
     calculatePrice(value);
     printf("value is :%f\n",value);
     return 0;
}
void calculatePrice(float value){
    value=value+(0.18*value);
    printf("final price is :%f\n",value);
}
//Ques 29 : use library functions to calculate the square of a number given by user
#include<stdio.h>
#include<math.h>
int main(){
    int n=4;
    printf("%f",pow(n,2));
    return 0;
}
// Ques 30 : calculate area of square
#include<stdio.h>
#include<math.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);
int main(){
      float a=5.0;
      float b= 10.0;
      printf("area is :%f", rectangleArea(a,b));
}
float squareArea(float side){
    return side*side;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b){
    return a * b;
}
// TOPIC : recurrsion
// Ques 31 : print "Hello world" 5 times
#include<stdio.h>
void printHW(int count);
int main(){
printHW(5);
}
void printHW(int count){
    if (count==0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}
// Ques 32 : sum of first n natural number
#include<stdio.h>
int sum(int n);           // function prototype
int main(){
      printf("sum is :%d",sum(5));       // function calling
}
// recursive function
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumNm1=sum(n-1); // sum of 1 to n
    int sumN=sumNm1+n;
    return sumN;
}
// Ques 33 : factorial of n
#include<stdio.h>
int fact(int n);
int main(){
    printf("fcatorial is :%d",fact(4));
}
int fact(int n){
     if (n==0)
     {
        return 1;
     }
     int factNm1=fact(n-1);
     int factN=factNm1*n;
     return factN;
}
//Ques 34 : convert celsius to farenheit
#include<stdio.h>
float convertTemp(float celsius);
int main(){
      float far=convertTemp(32);
      printf("far:%f",far);
}
float convertTemp(float celsius){
        float far=celsius*(9.0/5.0)+32;
        return far;

}
// Ques 35 : calculate percentage of a student from marks in science , maths ans sanskrit
#include<stdio.h>
int calculatePercentage(int science,int math,int sanskrit);
int main(){
    int sc=98;
    int math=99;
    int sanskrit=86;
    printf("percentage is :%d ",calculatePercentage(sc,math,sanskrit));
    return 0;
}
int calculatePercentage(int science, int math , int sanskrit){
    return((science + math + sanskrit)/3);
}
// print n terms of fabonacci sequnce
// 0,1,1,2,3,5,13,21---------(every no is sum of its previous 2 numbers )
// recursive function is in complete without base case
#include<stdio.h>
int fib(int n);
int main()
{
   fib(6);
}
int fib(int n){
    if(n==0 || n==1){    // base case
        if (n==0)
        {
            return 0;
        }
        if (n==1)
        {
            return 1;
        }
        
        
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fib of %d is : %d\n", n , fibN);
    return fibN;
}
// fabonacci sequence by loops