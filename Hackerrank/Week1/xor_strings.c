#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s1[1001],s2[1001];
    scanf("%s",s1);
    scanf("%s",s2);
    int l=strlen(s1);
    for ( int i=0;i<l;i++){
        if(s1[i]==s2[i]){
            printf("0");
        }
        else{
            printf("1");
        }
    }
        printf("\n");
      
        return 0;
}