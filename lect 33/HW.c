//Ques 14 : print no from 0 to n , if n is given by user (n=4)
#include<stdio.h>
int main(){
    int n=4;
    scanf("%d",&n);
    for (int i = 0; i <=4; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
// Ques 15: print sum of n natural no , n=4 also, print them in reverse
#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d\n",&n);
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    printf("sum is %d",sum);
}
//Ques 16 : print the table of a no input by user n=2
#include<stdio.h>
int main(){
    int n=2;
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",n*i);
    }
    
}
// Ques 17 : keep taking number as input from user until user enters an odd num.
#include<stdio.h>
int main(){
    int num;
    printf("enter number :");
    scanf("%d",&num);
    while (num%2==0)
    {
        printf("enter again :");
        scanf("%d",&num);
    }
    printf("You entered an odd number : %d\n",num);
    return 0;
}
//
#include<stdio.h>
int main(){
    int num;
    printf("enter number :");
    scanf("%d",&num);
    if (num%2!=0)
    {
        printf("You entered an odd number ");
    }
    else
    {
        printf("The no entered by user is not an odd no");
    }  
    
}
//Ques 18 : keep taking number as input from user until user enter no which is a multiple of 7
#include<stdio.h>
int main(){
    int num;
    printf("enter number :");
    scanf("%d",&num);
    if (num%7==0)
    {
        printf("The no entered by user is a multiple of 7");
    }
    else
    {
        printf("The no entered by user is not a mutilple of 7");
    }
}
    
// Ques 19 : print all no from 1 to 10 except 6.
// for this type of problems we use continue statement.
// continue statement skip some particular lines .
#include<stdio.h>
int main(){
  for (int i = 0; i <=10; i++)
  {
    if (i==6)
       continue;
       printf("%d\n",i);
  }
  return 0;
}
//Ques 20 : print all odd number from 5 to 50
// in updation part increase by 2 each time (keeps number odd)
#include<stdio.h>
int main(){
    for (int i = 5; i <=50; i+=2)
    {
        printf("%d\n",i);
    }
}
// Ques 21 : print factorial of a number n
#include<stdio.h>
int main(){
    int n,i;
    int fact=1;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial:%d\n",fact);
}
// Ques 22 : print reverse of the table for a no n.
#include<stdio.h>
int main(){
    int n=2;
    for (int i = 10; i>=1; i--)
    {
        printf("%d\n",n*i);
    }
    
}
// Ques 23 : calculate the sum of all no between 5&50
#include<stdio.h>
int main(){
    int sum=0;
    for (int i = 5; i <=50; i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);
}