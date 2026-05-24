#include <stdio.h>
#include <stdlib.h> 
int main(){
    int size;
    scanf("%d", &size);

    int row=size;
    int col=size;

    int arr[row][col];

    int maindgcount=0;
    int secondarydgcount=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &arr[i][j]);
        }
    }

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // printf("%d ", arr[i][j]);

            if(i==j){
                maindgcount=arr[i][j]+maindgcount;
            }
        }

        
    }


     for(int i=0;i<row;i++){
        for(int j=col-1;j>=0;j--){
           

            if(i+j==row-1){
                secondarydgcount=arr[i][j]+secondarydgcount;
            }
        }

       
    }

  

     int sum=abs(maindgcount-secondarydgcount);

     printf("%d", sum);




    return 0;
}