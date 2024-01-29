#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[50];
    char s[50];
    int i, j;
    scanf("%s",str);
    scanf("%s",s);
    int count=0;
    int l=strlen(str);
    printf("%d\n",l);
    int p=strlen(s);
    printf("%d\n",p);
    for(i=0;i<l-p+1;i++){
        for(j=0;j<p;j++){
            count++;
            if(s[j]!=str[i+j]){
                break;
            }
            count++;
            if(j==p){
                break;
            }
        }
    }
    printf("%d\n",count);
}