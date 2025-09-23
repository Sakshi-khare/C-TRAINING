//patterns
#include <stdio.h> 
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // printf("*");
            if(i==1 || i==n || j==1 || j==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//
#include<stdio.h>
int main(){
    for(int i=0;i<4;i++){
           for(int j=0;j<=i;j++){
             printf("*");
         }
       
       for(int k=3;k>i;k--){
             printf(" ");
        }
          for(int k=3;k>i;k--){
           printf(" ");
       }
         for(int p=0;p<=i;p++){
            printf("*");
       }
      printf("\n");
    }
}
//
#include<stdio.h>
int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j >i; j--)
        {
            printf("*");
        }
        for (int k = 0; k >=i; k++)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
//
#include<stdio.h>
int main(){
    for (int  i = 0; i <4; i++)
    {
        for (int  j = 0; j<=i; j++)
        {
            printf("*");
        }
        for (int k = 3; k>i; k--)
        {
            printf(" ");
        }
        for (int p = 3; p>i; p--)
        {
            printf(" ");
        }
        for (int z = 0; z<=i; z++)
        {
            printf("*");
        }
          printf("\n");
    }
  
}
//
#include<stdio.h>
int main(){
    int a,b=0,c;
    printf("enter number to check:");
    scanf("%d",&a);
    if (a==1)
    {
        printf("not prime");
    }
    else{
        for (int i = 2; i <=2; i++)
        {
            if (a%i==0)
            {
                b++;
            }
            
        }
        if (b!=0)
        {
            printf("number is not prime");
        }
        else
        {
            printf("number is prime");
        }
        
        
    }
}
//
#include<stdio.h>
int main(){
     for(int i=0;i<4;i++){
      for(int j=3;j>i;j--){
             printf("*");
         }
         for(int k=0;k<=i;k++){
             printf(" ");
         }
          for(int k=0;k<=i;k++){
             printf(" ");
         }
          for(int j=3;j>i;j--){
             printf("*");
         }
         printf("\n");

     }
}
//
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
     for (int i = 2; i <=n ; i++)
     {
        int count=0;
        for (int j = 0; j <=i; j++)
        {
            if(i%j==0)
            count++;
        }
        if (count==2)
        {
            printf("%d\n",i);
        }
     }
    return 0; 
}