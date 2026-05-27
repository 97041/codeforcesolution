#include <stdio.h>


void recursivefact(int x,long long int res){
    if(x==0){
        printf("%lld",res);
        return;
    }
   
    res=res*x;
    x=x-1;
    


    recursivefact(x,res);
}

int main(){
    int n;

    scanf("%d", &n);

    long long int sum=1;

    recursivefact(n,sum);

    return 0;
}