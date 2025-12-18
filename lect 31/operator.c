// //CHAPTER 2 : Instructions and operators
// // Type decalartion instructions
#include<stdio.h>
int main(){
    int age = 22;
    int oldAge= age;
    int newAge=oldAge +2;
    printf("The new age will be %d\n",newAge);
}
// 
// order of decalaration is important
float radius;
float area=pi*radius*radius;
float pi = 3.14;
// // valid decalaration
int age1, age2, age3;
age1=age2=age3=22;
// invalid decalaration
a1=a2=a3=32;

// Arithmatic instructions
// (+,-,/,*,%)
#include<stdio.h>
int main(){
    int a = 2, b=3,c=5;
    //valid
     a= b*c;
     a=b/c;
     a=b+c;
     //invalid 
     b+c=a;
     a=bc;
     a=b^c;
    printf("output:%d\n",a);
    // modulus operation
   printf("%d\n",3%2);
}
// Type conversion
#include<stdio.h>
int main(){
    int a=1.9999;
    printf("The sum of 2 and 3 is %d\n",2+3);
    printf("The sum of 2 and 3.0 is %d\n",2+3.0);
    printf("The sum of 2.0+3.0 is %d\n",2.0+3.0);
    printf("%d",a);
}
// Associativity
#include<stdio.h>
int main(){
    printf("Output is : %d\n",4+9*10);
    printf("Output is : %d\n",4*3/6*2);
    printf("Output is : %d\n",5*(2/2)*3);
}
// RELATIONAL OPERATORS
#include<stdio.h>
int main(){
    printf("%d\n",4==4);
    printf("%d\n",3>4);
    printf("%d\n",6>=4);
    printf("%d\n",4<3);
    printf("%d\n",5<=6);
    printf("%d\n",4!=3);
}
//LOGICAL OPERATOR
/*
&& AND
|| OR
! NOT
*/
#include<stdio.h>
int main(){
 printf("%d\n",3>2&& 3<2);
 printf("%d\n",2>4 && 3>1);
 printf("%d\n",5>4&& 4>3);
 printf("%d\n",5<4&& 4<3);
 printf("%d\n",5>4|| 6>5);
 printf("%d\n",4>3||4<2);
 printf("%d\n",6<1||9>19);
 printf("%d\n",3<2||4>9);
}
// ASSIGNMENT OPERATORS
#include<stdio.h>
int main(){
    int a=5;
    a+=5;
    printf("a+5=%d\n",a);
    a-=5;
    printf("a-5=%d\n",a);
    a*=5;
    printf("a*5=%d\n",a);
    a/=5;
    printf("a/5=%d\n",a);
    a%=5;
    printf("a%5=%d\n",a);
}