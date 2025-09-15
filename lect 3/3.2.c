// largest of 3 number// else if
#include<stdio.h>
int main(){
    int a=5,b=8,c=10;
    scanf("%d %d %d ",&a,&b,&c);
    if (a>=b&& a>=c)
    {
        printf("%d\n",a);
    }
    else if (b>=a&&b>=c);
    {
        printf("%d\n",b);
    }
    {
        printf("%d\n",c);
    }
    return 0;
}
// leap year

#include<stdio.h>
int main(){
    int y;
    scanf("%d",y);
    if ( y % 4==0)
    {
        printf("leap year\n");
    }
    else{
        printf("not leap year\n");
    }
}
// grade calculator
#include<stdio.h>
int main(){
    int marks=70;
    if (marks>0)
    {
        printf("invalid marks");
    }
    
}
// grade calculator 2
