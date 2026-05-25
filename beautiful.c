#include <stdio.h>

int main(){
    

    int r=6;
    int c=6;

    int arr[r][c];


      for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int moverow;
    int movecol;

    
      for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(arr[i][j]==1){
               
                if(j>3){
                    movecol=j-3;
                }
                else{
                    movecol=3-j;
                }

                if(i<3){
                    moverow=3-i;
                }
                else{
                    moverow=i-3;
                }
            }
        }
       
    }
    int movement=moverow+movecol;

    printf("%d",movement);

    return 0;
    

}