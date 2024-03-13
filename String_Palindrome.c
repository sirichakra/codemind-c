#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int l=0;
    int h=strlen(s)-1;
    while(h>l){
        if(s[l++]!=s[h--]){
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
}