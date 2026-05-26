#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count =0;

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

    }

      for(int i=0,j=n-1;i<n;i++,j--){

        count ++;


        

      


        if(n%2==0){

             printf("%d ", arr[i]);
             printf("%d ", arr[j]);

              if(count==n/2){
                 break;
             }

        }else{

            if(i==j){
                printf("%d", arr[i]);
            }
            else{

                 printf("%d ", arr[i]);
                 printf("%d ", arr[j]);

            }

                
            if(count==n/2+1){
                break;
            }
        }

      


    }

    return 0;
}