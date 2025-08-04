#include<stdio.h>
void plusminus(int arr_count, int* arr){
    int post_count=0;
    int neg_count=0;
    int zero_count=0;
    for (int i=0;i<arr_count;i++){
        if (arr[i]>0){
            post_count++;
        }else if(arr[i]<0){
            neg_count++;
        }else{
            zero_count++;
        }
    }

double post_ratio=(double)post_count/arr_count;
double neg_ratio=(double)neg_count/arr_count;
double zero_ratio=(double)zero_count/arr_count;
printf("%.6f\n",post_ratio);
printf("%.6f\n",neg_ratio);
printf("%.6f\n",zero_ratio);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    plusminus(n,arr);
    return 0;
}