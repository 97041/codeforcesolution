#include <stdio.h>

int main(){
   
   

    int n;
    scanf("%d", &n);

      int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=arr[0];

      for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
            }
        }


       
    }
    int count =0;

    for(int i=0;i<n;i++){

        if(min==arr[i]){
            count++;
        }

    }

    if(count%2==1){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }



    return 0;
}