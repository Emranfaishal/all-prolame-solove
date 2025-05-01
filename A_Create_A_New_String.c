#include<stdio.h>
int main(){
    int s[100001];
    int t[100001];
    scanf("%s %s",&s,&t);
    int len1= strlen(s);
    int len2= strlen(t);
    printf("%d %d\n",len1,len2);
    printf("%s %s\n",s,t);
    return 0;
}