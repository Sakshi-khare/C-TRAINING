// Ques 5 : check if a number is divisible by 2 or not 
#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter number");
    scanf("%d",&x);
    printf("%d\n",x%2==0);
}
// Ques 6 : check if number is even or odd 
#include<stdio.h>
int main(){
    int y;
    printf("enter number");
    scanf("%d",&y);
    printf("%d\n",y%2==0);
}
// Ques 7 : print the avg of 3 numbers
#include<stdio.h>
#include<math.h>
int main(){
    int a=10,b=20,c=30;
    scanf("%d",&a,&b,&c);
    float avg;
    avg=(a+b+c)/3.0;
    printf("Average=%2f",avg);
}
// Ques 8 : check if given character is digit or not
// LOGIC: A digit character lies between '0' and '9'
#include<stdio.h>
int main(){
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    printf("%d",(ch>='0'&& ch<='9'));
    return 0;
}