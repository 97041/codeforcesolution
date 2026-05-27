#include <stdio.h>


int maxrecurse(int arrs[],int firsti,int length,int max){
    
 

  if(max<arrs[firsti]){
    max=arrs[firsti];
  }

  if(firsti==length-1){
    return max;
  }

  maxrecurse(arrs,firsti+1,length,max);


}

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int maximum=arr[0];
    

    int solved= maxrecurse(arr,0,n,maximum);

    printf("%d", solved);



    return 0;
}