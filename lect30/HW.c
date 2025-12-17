//  Ques 1: calculate area of square (side is given)
#include<stdio.h>
int main(){
    int side=5;
    scanf("%d",&side);
    printf("Area of square is %d\n",side*side);
}
// Ques 2: calculate area of circle (radius is given)
#include<stdio.h>
int main(){
    float radius=6.0;
    scanf("%f",&radius);
    printf("Area of circle is %f\n",3.14*radius*radius);
}
// Ques 3: calculate perimeter of rectangle .Take sides a,b from user.
#include<stdio.h>
int main(){
    int length;
    int breadth;
    printf("enter length");
    scanf("%d",&length);
    printf("enter breadth");
    scanf("%d",&breadth);
    printf("Perimeter of rectangle is %d\n",2*(length+breadth));
}
// Ques 4: take a number (n)from user and output its cube (n*n*n)
#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("The cube of a number is %d\n",n*n*n);
}