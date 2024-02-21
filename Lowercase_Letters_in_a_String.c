#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^
]s",s);
    int i,lwr=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>='a'&&s[i]<='z'){
            lwr++;
        }
    }
    printf("%d",lwr);
}