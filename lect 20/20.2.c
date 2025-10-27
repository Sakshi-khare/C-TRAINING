//string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abc";
    int freq[256] = {0};   
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        freq[str[i]]++; 
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
#include <stdio.h>
 #include <string.h>
int main(){
 char str[]="hello";
 int count;
 int ln=    strlen(str);
for(int i=0;i<ln-1;i++){
count=0;
for(int j=0;j<ln;j++){
    
        if(  str[i]==str[j]){
           count++;
}
}
    if(count==0){
       printf("%c",str[i]);
     }
}


"hello"
}

