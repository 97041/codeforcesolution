#include <stdio.h>
#include <string.h>

int main(){
    char str[210];
    int count=0;
    fgets(str, sizeof(str), stdin);
    int len=strlen(str);

    for(int i=0;i<len;i++){
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' ||str[i]=='U' || str[i]=='u'){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}