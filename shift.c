#include <stdio.h>


void solveshift(int arr[],int length){
    for(int i=0;i<length-1;i++){
       for(int j=i+1;j<length;j++){
        int temp;
        if(arr[i]==0){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            
        }
       }
    }


      for(int i=0;i<length;i++){

        printf("%d ",arr[i]);
      
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    solveshift(arr,n);


    return 0;
}