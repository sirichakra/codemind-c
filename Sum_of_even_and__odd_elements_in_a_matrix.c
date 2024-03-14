#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]%2==0)
            sum+=a[i][j];
        }
    }
    int s=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]%2!=0)
            s+=a[i][j];
        }
    }
    printf("%d %d",sum,s);
}