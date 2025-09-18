//fabonacci series
#include<stdio.h>
int main(){
int n=5;
int t1=0; 
 int t2=1;
 int next;
for(int i=1;i<=n;i++)
{
 printf("%d,t1");
 next=t1+t2;
 t2=next; 
 }
    return 0;
}
//break
#include<stdio.h>
int main(){
    for(int i=5;i<=10;i++){
        printf("%d,i");
        if (i%2==0)
        {
           // break;
           continue;
        }  
    }
return 0;
}
#include<stdio.h>
int main(){
    int n=123;
    int count=0;
 if(n=0){
       count=1;
 }
 while (n>0)
 {
    count++;
    n=n/10;
 }
 printf("n");
 return 0;
}