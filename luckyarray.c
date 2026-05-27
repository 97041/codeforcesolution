#include <stdio.h>

int main(){
    int freqarr[200001] = {0};

    int n;
    scanf("%d", &n);

      int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=0;

      for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
    
            freqarr[arr[i]]++;
    
    }    
                    
    int valx;

    for(int i=0;i<=max;i++){
        
       if(freqarr[i]>0){
          valx=freqarr[i];
          break;
         
       }
    }

   if(valx%2==1){
    printf("Lucky");
   }
   else{
    printf("Unlucky");
   }



    return 0;
}