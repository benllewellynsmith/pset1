#include <stdio.h>
#include <cs50.h>

int main (void){

    int q=25;
    int d=10;
    int n=5;
    int p=1;

    int noof_q=0;
    int noof_d=0;
    int noof_n=0;
    int noof_p=0;


    float a;
    int c;

    //printf("%i %i %i %i\n",q,d,n,p);

    printf("O hai! How much change is owed?\n");
    a=get_float();
    while (a<=0){
        printf("How much change is owed?\n");
        a=get_float();
    }

    c=(a*1000)/10;

    while (c>=q){
        c=c-q;
        noof_q++;
    }

    while (c>=d){
        c=c-d;
        noof_d++;
    }

     while (c>=n){
        c=c-n;
        noof_n++;
    }

     while (c>0){
        c=c-p;
        noof_p++;
    }

    //printf("change still owed %i\n",c);
    //printf("if %i quarters given \n",noof_q);
    //printf("if %i dimes given \n",noof_d);
    //printf("if %i nickles given \n",noof_n);
    //printf("if %i pennies given \n",noof_p);
    //printf("so the min number of coins needed is\n");
    printf("%i\n",noof_q+noof_d+noof_n+noof_p);


}
