#include<stdio.h>

int sockMerchant(int n, int arr[]){
    int count[101]={0};
    int p=0;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for (int i=0;i<101;i++){
        p+=count[i]/2;
    }
    return p;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",sockMerchant(n, arr));
    return 0;
}