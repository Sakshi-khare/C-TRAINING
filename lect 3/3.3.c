//palindrom number
#include<stdio.h>
int main(){
    int n, rev=0,temp;
    scanf("%d",n);
    if (n<0)
    {
        printf("not palindrome\n");
    }
    temp =n;
     while (temp>0)
 {
    rev=rev*10 + temp%10;
    temp/=10;
 }
 if (rev==n)
 {
    printf("palindrome\n");
 }
 else
 {
 printf("not palindrome\n");
}
}
