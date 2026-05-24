#include <stdio.h>


void recursionfun(int x,int z){
    
    int v=z;
    
     printf("%d\n",v);
  

   
    if(v==x){
        return;
    }
    recursionfun(x,v+1);
}
int main(){
    int w;
    scanf("%d", &w);
    int y=1;

    recursionfun(w,y);

    return 0;
}