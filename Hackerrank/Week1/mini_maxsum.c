#include<stdio.h>
void minmaxsum(long arr[]){
    long long sum=0;
    long long min_val=arr[0];
    long long max_val=arr[0];
    for (int i =0;i<5;i++){
        sum+=arr[i];
        if (arr[i]<min_val){
            min_val=arr[i];
        }
        if (arr[i]>max_val){
            max_val=arr[i];
        }
    }
    long long min_sum=sum-max_val;
    long long max_sum=sum-min_val;
    printf("%ld %ld\n",min_sum,max_sum);
}
int main(){
    long arr[5];
    for (int i=0;i<5;i++){
        scanf("%ld",&arr[i]);
    }
    minmaxsum(arr);
    return 0;
}