#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt=0,sum=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            sum++;
            if(i%2==0)
            cnt++;
        }
    }
    if(cnt==sum)
    printf("True");
    else
    printf("False");
}