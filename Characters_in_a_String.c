#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%[^
]s",s);
    int i,cnt=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>='A'||s[i]<='Z'||s[i]>='a'||s[i]<='z')
        cnt++;
    }
    printf("%d",cnt);
}