//CHAPTER 3 : CONDITIONAL STATEMENT
// If - else
#include<stdio.h>
int main(){
    int age =19;
    if (age>=18)
    {
        printf("you are adult");
    }
    else{
        printf("you are not an adult");
    }
 return 0;
}
// check if number is even or odd
#include<stdio.h> 
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("The number is even.")
    }
    else
    {
        printf("The number is odd");
    }
    
}
// >use of else if
#include<stdio.h>
int main(){
    int age;
    printf("enter age :");
    scanf("%d",&age);
    if (age<12)
    {
        printf("child");
    }
    else if (age<18)
    {
        printf("teenager");
    }
    else
    {
        printf("adult");
    }
    return 0;
}
// > use of ternary operator
#include<stdio.h>
int main(){
    int age;
    printf("enter age :");
    scanf("%d",&age);
    age<18?printf("teenager\n"):printf("adult\n");
}
//
#include<stdio.h>
int main(){
    int number=9;
    int LuckyNumber=7;
    number==LuckyNumber?printf("you are lucky\n"):printf("you are not lucky");
}
// switch case(integer)
 #include<stdio.h>
 int main(){
    int day;
    printf("enter day");
    scanf("%d",&day);
    switch (day)
    {
        case 1 :
        printf("Monday\n");
        break;
         case 2 :
        printf("Tuesday\n");
        break;
         case 3 :
        printf("Wednesday\n");
        break;
         case 4 :
        printf("Thursday\n");
        break;
         case 5 :
        printf("Friday\n");
        break;
         case 6 :
        printf("Saturday\n");
        break;
         case 7 :
        printf("Sunday\n");
        break;
    default:
    printf("Holiday\n");
        break;
    }
 }
 // switch (character)
 #include<stdio.h>
 int main(){
    int day;
    printf("enter character");
    scanf("%d",&day);
    switch (day)
    {
        case 'm' :
        printf("Monday\n");
        break;
         case 't' :
        printf("Tuesday\n");
        break;
         case 'w' :
        printf("Wednesday\n");
        break;
         case 'T' :
        printf("Thursday\n");
        break;
         case 'f' :
        printf("Friday\n");
        break;
         case 's' :
        printf("Saturday\n");
        break;
         case 'S' :
        printf("Sunday\n");
        break;
    default:
    printf("Holiday\n");
        break;
    }
 }