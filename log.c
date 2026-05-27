#include <stdio.h>


long long int solvelog(long long int x,long long int changable,long long int cnt){


     if(x==1){
        return 0;
    }

    changable=changable*2;
    cnt++;




    if(changable==x){
        return cnt;
    }
    else if(changable>x ){
        return cnt-1;
    }
   
  

    solvelog(x,changable,cnt);

}

int main(){

    long long int n;
    scanf("%lld", &n);

    long long int returnval=2;
    long long int count = 1;

    long long int valy= solvelog(n,returnval,count);

    printf("%lld", valy);
    return 0;
}



//jumping jacks- 50
//mountain climbers-50
//squat - 10
// plank - 40 sec