#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^
]s",s);
    int i,upr=0;
    for(i=0;s[i]!=NULL;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            upr++;
        }
    }
    printf("%d",upr);
}