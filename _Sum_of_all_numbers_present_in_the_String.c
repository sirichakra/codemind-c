#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%[^
]s",s);
    int i,sum=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>='0'&& s[i]<='9'){
        sum+=(s[i]-'0');
        }
    }
    printf("%d",sum);
}