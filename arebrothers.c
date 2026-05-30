#include <stdio.h>
#include <string.h>
int main(){
    char ffirstname[500];
    char llastname[500];

    scanf("%s %s",ffirstname,llastname);

    char sfirstname[500];
    char slastname[500];

    int strlens1 = strlen(llastname);
    int flag=0;

  

     scanf("%s %s",sfirstname,slastname);

     int strlens2 = strlen(slastname);

     if(strlens1!=strlens2){
        flag=1;
     }

     if(strlens1==strlens2){
        for(int i=0;i<strlens1;i++){
            if(llastname[i]!=slastname[i]){
               flag=1;
            }
        }
     }

     if(flag==0){
        printf("ARE Brothers");
     }
     else{
        printf("NOT");
     }

     

    return 0;
}