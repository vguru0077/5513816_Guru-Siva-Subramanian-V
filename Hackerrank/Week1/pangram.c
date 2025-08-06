#include<stdio.h>
#include<string.h>
#include<ctype.h>
int panagram(char s[]){
    int letters[26]={0};
    int ind;
    for (int i=0;s[i]!='\0';i++){
        if(isalpha(s[i])){
            ind=tolower(s[i])-'a';
            letters[ind]=1;
        }
    }
    for (int i=0;i<26;i++){
        if (letters[i]==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[1000];
    fgets(s,sizeof(s),stdin);
    if(panagram(s)){
        printf("pangram\n");
    }
    else{
        printf("not pangram");
    }
}
