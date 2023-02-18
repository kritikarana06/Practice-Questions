//Case based program
#include<stdio.h>
int main(){
    int n;
    printf("enter the n:\n");
    scanf("%d",&n);
    if(n>=1&&n<=7){
        if(n==1){
            printf("monday");

        }
        else if(n==2){
            printf("tuesday");

        }
        else if(n==3){
            printf("wednesday");
        }
        else if(n==4){
            printf("thursday");
        }
        else if(n==5){
            printf("friday");
        }
        else if(n==6){
            printf("sat");
        }
        else{
            printf("sunday");
        }

  
    }
    else{
        printf("invalid input");
    }
      
    return 0;
}