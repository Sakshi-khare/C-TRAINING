// CHAPTER 1
// Code to store data
#include<stdio.h>
int main(){
  int age = 22;
  float pi = 3.14;
  char hashtag='#';
  scanf("%d",&age);
  scanf("%f",&pi);
  scanf("%c",&hashtag);
  printf("Age is %d\n",age); // Integers
  printf("The value of pi is %f\n",pi); // real numbers
  printf("The hastag sign is %c\n", hashtag); // character
}
// Code to print sum
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    int sum=a+b;
    printf("The sum is %d",sum);
}