#include <stdio.h>


int solveoperation(int arr[],int firsti,int lasti,int opc){
    
    for(int i=0;i<lasti;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]/2;
           
        }
        else{
            return opc;
        }
    }
    opc++;

    

    solveoperation(arr,firsti,lasti,opc);

    
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int opc=0;

    int returnval= solveoperation(arr,0,n,opc);

    printf("%d",returnval);



    return 0;
}