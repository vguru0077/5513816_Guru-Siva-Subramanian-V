#include<stdio.h>

int birthday(int s[], int n, int d, int m){
    int count=0;
    int sum=0;
     for (int i=0;i<m;i++){
        sum+=s[i];
     }
     if (sum==d) count++;
     for (int i=m;i<n;i++){
        sum=sum-s[i-m]+s[i];
        if (sum==d) count++;
     }
     return count;
}

int main(){
    int n;
    scanf("%d",&n);
    
    int s[n];
    for (int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int d,m;
    scanf("%d %d",&d,&m);
    int result=birthday(s, n, d, m);
    printf("%d\n",result);
    return 0;
}