#include<stdio.h>
int main(){
    int m,n,i,j,s=0;
    scanf("%d%d",&m,&n);
    int arr[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int key;
    scanf("%d",&key);
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==key){
                printf("1");
                s=1;
                break;
            }
        }
    }
   if(s==0) printf("0");
}