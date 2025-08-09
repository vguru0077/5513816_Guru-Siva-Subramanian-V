#include<stdio.h>

unsigned int flipbits(unsigned int n){
    return  n^(0xFFFFFFFF);
}

int main(){
    int q;
    scanf("%d",&q);
    
    for (int i=0; i<q;i++){
        unsigned int n;
        scanf("%u",&n);
        printf("%u\n",flipbits(n));
    }
    return 0;
}
