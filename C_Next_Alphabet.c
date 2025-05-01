#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'z'){
        printf("%c",ch);
    }
    else{
        printf("%c\n",ch+1);
    }
    return 0;
}