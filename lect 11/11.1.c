#include <stdio.h>
int sum(){
    int a=5;
    int b=10;
    int c=a+b;
    return c;
}
int main(){
  int data= sum();
  printf("%d",data);

}
////1234  => 1+2+3+4=10=> 1+0=1

#include <stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}

}
//
#include<stdio.h>
int main(){
    for(int i =0;i<=4;i++){
  for(int j=0;j<=4;j++){
 printf("*");
     if(i==j || j==(4-i)){
        printf("*");
    }else{
       printf(" ");
 }
 }printf("\n");
    }
}