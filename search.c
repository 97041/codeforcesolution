#include <stdio.h>

int main(){
    int r;
    int c;
    scanf("%d %d", &r,&c);
   

    int arr[r][c];

    int flag=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            scanf("%d", &arr[i][j]);

        }
    }

     int input;

    scanf("%d",&input);


       for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            if(arr[i][j]==input){

                flag=1;

            }

        }
        
    }
    

    if(flag==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }

  
    return 0;
}