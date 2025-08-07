#include<stdio.h>
#include<stdlib.h>
 int main(){
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    int a=0,b=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
            if (i==j){
                a+=matrix[i][j];
            }
            if (i+j==n-1){
                b+=matrix[i][j];
            }
        }
    }
    int res=abs(a-b);
    printf("%d",res);
    return 0;
 }
