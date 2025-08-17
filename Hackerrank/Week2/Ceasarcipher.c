#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caesarCipher(char *s, int k) {
    int i;
    int l=strlen(s);
    k=k%26;
    for (i=0;i<l;i++){
        char c=s[i];
        if (isalpha(c)){
            char base = isupper(c)? 'A':'a';
            s[i]=(char)((((c-base)+k)%26)+base);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int k;
    scanf("%d",&k);
    
    caesarCipher(s, k);
    
    printf("%s\n",s);
    return 0;
}