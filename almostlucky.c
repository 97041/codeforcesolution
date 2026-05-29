#include <stdio.h>

int main(){
    int luckynumb[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    int n;
    scanf("%d", &n);

    int flag=0;

    for(int i=0;i<14;i++){

        if(n%luckynumb[i]==0){
           flag=1;
        }
        
    }

    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}