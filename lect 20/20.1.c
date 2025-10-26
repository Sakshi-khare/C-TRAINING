//string
#include<stdio.h>
int main(){
    char name[]="hiii";
    printf("name:%c",name[0]);
    return 0;
}
#include <stdio.h>
int main() {
    char name[50];\0
printf("Enter your name: ");
     scanf("%s", name);  // space tak hi input leta hai
    printf("You entered: %s\n", name);
     return 0;
 }

 #include <stdio.h>

 int main() {
     char name[50];
    printf("Enter your full name: ");
   gets(name);   
    printf("You entered: %s\n", name);
     return 0;
 }
