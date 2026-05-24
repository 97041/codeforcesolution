#include <stdio.h>
#include <string.h>

char str[10000005];
int main(){

    scanf("%s", str);

    int len=strlen(str);

     int freq[259]={0};
     for(int i=0;i<len;i++){
         int val=str[i];
         

         freq[val]++;

        
     }

    
    int k=0;
 
    while(k!=257){
        if(freq[k]>0){
            printf("%c : %d\n",k,freq[k]);
        }
        k++;
    }
 
     return 0;


    

}


    //  while(str[k]!='\0'){
         
    //         printf("%c : %d\n", str[k],freq[str[k]]);
        
    //      k++;
    //  }
    // int k=0;