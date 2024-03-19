#include<stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for (int i=0;i<n;i++) {
        int rsum = 0;
        for (int j=0;j<m;j++) {
            rsum += a[i][j];
        }
        if (rsum>sum){
            sum=rsum;
        }
    }
    printf("%d",sum);
}