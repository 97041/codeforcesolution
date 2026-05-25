#include <stdio.h>


int solveoperation(int arr[],int firsti,int lasti,int opc){
    int flag=0;
    if(arr[firsti]%2==0){
       arr[firsti]=arr[firsti]/2;
    }
    if(arr[firsti])
}

int main(){
    int n;
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int opc=0;

    int operation=solveoperation(arr,0,n,opc);



    return 0;
}