#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^
]",str);
    int len = strlen(str);
    for (int i = 0, j = len - 1; i <= j; i++, j--){
        char c = str[i]; 
        str[i] = str[j]; 
        str[j] = c; 
    } 
  
    printf("%s",str); 
  
}