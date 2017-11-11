#include <stdio.h>
#include <cs50.h>

int main(void){
    int h;
    do{
        printf("Height:");
        h = get_int();
    }while(h>23 || h<0);
    //printf("valid\n");
    for (int i=1;i<=h;i++){
        for (int k=h-i;k>0;k--){
            printf(" ");
        }
        for (int j=0;j<i+1;j++){
            printf("#");
        }
        printf("\n");
    }
}
