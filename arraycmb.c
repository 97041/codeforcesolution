#include <stdio.h>
#include <string.h>

int main(){

    int testcase;
    scanf("%d",&testcase);

    while(testcase--){

    char s[53];
    char t[53];

    
    scanf("%s", s);
    scanf("%s",t);
   

    int length1= strlen(s);
    int length2= strlen(t);
    int combine=length1+length2;
   
    int i;

    for(i=0;i< length1 && i<length2;i=i+1){
      
      printf("%c%c",s[i],t[i]);
    }

    if(i<length1){
        for( ;i<length1;i++){
            printf("%c",s[i]);
        }
    }
    if(i<length2){
        for( ;i<length2;i++){
            printf("%c",t[i]);
        }
    }

    printf("\n");

    }
    

    return 0;
}