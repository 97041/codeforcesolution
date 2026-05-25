#include <stdio.h>

long long solved(int arrs[],int firsti,int lasti,int summation){
    
    
    if(firsti==lasti){
        return 0;
    }
    
    
    
    return arrs[firsti]+solved(arrs,firsti+1,lasti,summation);
      
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int summation=0;

    long long int req=solved(arr,0,n,summation);
    printf("%lld",req);


    return 0;
}