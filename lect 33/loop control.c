//CHAPTER 4: Loop control instructions
// > use of for loop
#include<stdio.h>
int main(){
    for (int i = 0; i < 50; i++)
    {
        printf("Hello world \n");
    }
    
}
// (i++)post increment : use, increase
#include<stdio.h>
int main(){
    int i=1;
    printf("%d\n",i++);
    printf("%d\n",i);
}
// (++i)pre increament : increase , use
#include<stdio.h>
int main(){
    int i=2;
    printf("%d\n",++i);
    printf("%d\n",i);
}
// decrement operator
// (i--)post decrement : use, decrease
#include<stdio.h>
int main(){
    int i=10;
    printf("%d\n",i--);
    printf("%d\n",i);
}
// (--i)pre decreament : decrease , use
#include<stdio.h>
int main(){
    int i=9;
    printf("%d\n",--i);
    printf("%d\n",i);
}
// print number from 0 to 10(integer)
#include<stdio.h>
int main (){
    for (int i = 0; i <=10; i++)
    {
        printf("%d\n",i);
    } 
}
// loop counter(float)
#include<stdio.h>
int main(){
    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f\n",i);
    }
    
}
// for character
#include<stdio.h>
int main(){
    for (char ch = 'a'; ch<='z'; ch++)
    {
        printf("%c\n",ch);
    }
    
}
//infinite loop
#include<stdio.h>
int main(){
    for (int i = 1; ; i++)
    {
        printf("hello world\n");
    }
}
// > use while loop
// print number 1 to 5
#include<stdio.h>
int main(){
    int i =1;
    while (i<=5)
    {
        printf("%d\n",i);
    }
    i++;
}
//>do while loop
#include<stdio.h>
int main(){
    int i=5;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=5);
    
}