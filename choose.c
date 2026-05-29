#include <stdio.h>

int main(){
    int n,k;

    scanf("%d %d",&n,&k);

    long long arr[n];

    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }

     long long int temp;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           
            if(arr[i]<arr[j] ){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

    long long int sum=0;

       for(int i=0;i<k;i++){
        if(arr[i]>0){
            sum=sum+arr[i];
        }
    }

    // if(sum<0){
    //     printf("0");
    // }
    // else{

    //      printf("%lld", sum);

    // }

    printf("%lld",sum);

   

    return 0;
}