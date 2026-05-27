#include <stdio.h>


void recurrence(int numbs){
    
     if(numbs==0){
       
        return;
     }
   
   

    recurrence(numbs/10);
    int val=numbs%10;
    printf("%d ",val);

   
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int numb;
        scanf("%d",&numb);

        if(numb==0){
            printf("0");
        }
      

        recurrence(numb);
        printf("\n");
    }

    return 0;
}