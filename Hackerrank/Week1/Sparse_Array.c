#include<stdio.h>
#include<string.h>
#define MAX_STRINGS 10000
#define MAX_LENGTH 1001

int main(){
    int n;
    char arr[MAX_STRINGS][MAX_LENGTH];
    int q;
    char qrr[MAX_STRINGS][MAX_LENGTH];
    int count;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    scanf("%d",&q);
    for (int i=0;i<q;i++){
        scanf("%s",qrr[i]);
    }
    for (int i=0;i<q;i++){
        count=0;
        for (int j=0;j<n;j++){
            if (strcmp(qrr[i],arr[j]) ==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}