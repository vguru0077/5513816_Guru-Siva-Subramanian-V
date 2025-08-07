#include<stdio.h>
 void countingsort(int arr[],int n,int result[]){
    for (int i=0;i<100;i++){
        result[i]=0;
    }
    for (int i=0;i<n;i++){
        result[arr[i]]++;
    }
 }
 
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int result[100];
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    countingsort(arr,n,result);
    for (int i=0;i<100;i++){
        printf("%d ",result[i]);    }
        return 0;
 }