#include<stdio.h>
#include<string.h>
char s[1005];
int main(){
    int cnta=0,cntb=0,cntc=0,cntd=0,i;
    fgets(s,sizeof(s),stdin);
    for(i=0;i<sizeof(s)/sizeof(s[1]);i++){
        char c=s[i];
        if(c>='A'&&c<='Z')cnta++;
        else if(c>='a'&&c<='z')cntb++;
        else if(c>='0'&&c<='9')cntc++;
        else if(c>=33&&c<=126)cntd++;
    }
    printf("%d %d %d %d",cnta,cntb,cntc,cntd);
    return 0;
}