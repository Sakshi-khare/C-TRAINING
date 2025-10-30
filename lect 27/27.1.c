//bitwise question
//find xor
#include<stdio.h>
int main(){
    int arr[5]={4,5,3,4,5};
    int xor=0;
    for (int i = 0; i < 5; i++)
    {
        xor=xor^arr[i];
    }
    printf("%d",xor);
}
//bitwise swapping without using any 3rd varaible
#include<stdio.h>
int main(){
    int a=5,b=3;
    printf("before swapping a=%d and b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping a=%d and b=%d\n",a,b);
}
//find missing number in given array
#include<stdio.h>
int main(){
    int arr[4]={1,2,4,5};
    int xor1=0;
    int xor2=0;
    for (int i = 1; i <=5; i++)
    {
       xor1=xor1^i;
    }
    for (int i = 0; i < 4; i++)
    {
        xor2=xor2^arr[i];
    }
    printf("%d",xor1^xor2);
}