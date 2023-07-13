#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "complex.h"

//ENTER CTRL+C TO EXIT THE PROGRAM
int main(){
    char input[1000];
    int n;
    double temp;
    while(1){
        scanf("%s %d",input,&n);
        if(strcmp(input,"MOD")==0){
            //COMPLEX C
            complex c;
            c.arr = (double*)malloc(sizeof(double)*n);
            assert(c.arr!=NULL);
            c.size = n;
            for(int i=0;i<n;i++){
                scanf("%lf",&temp);
                c.arr[i] = temp;
            }
            //COMPLEX C
            float mod_value = mod(c);
            printf("The MOD of complex number c is MOD(c): %.2f\n",mod_value);
            continue;
        }
        //COMPLEX C1
        complex c1;
        c1.arr = (double*)malloc(sizeof(double)*n);
        assert(c1.arr!=NULL);
        c1.size = n;
        for(int i=0;i<n;i++){
            scanf("%lf",&temp);
            c1.arr[i] = temp;
        }
        //COMPLEX C1

        //COMPLEX C2
        complex c2;
        c2.arr = (double*)malloc(sizeof(double)*n);
        assert(c2.arr!=NULL);
        c2.size = n;
        for(int i=0;i<n;i++){
            scanf("%lf",&temp);
            c2.arr[i] = temp;
        }
        //COMPLEX C
        
        if(strcmp(input,"ADD")==0){
            complex c = add(c1,c2);
            //PRINT COMPLEX NUMBER
            for(int i=0;i<c.size;i++){
                printf("%.2lf ",c.arr[i]);
            }
            printf("\n");
            //PRINT COMPLEX NUMBER
        }
        else if(strcmp(input,"SUB")==0){
            complex c = sub(c1,c2);
            //PRINT COMPLEX NUMBER
            for(int i=0;i<c.size;i++){
                printf("%.2lf ",c.arr[i]);
            }
            printf("\n");
            //PRINT COMPLEX NUMBER
        }
        else if(strcmp(input,"DOT")==0){
            float dot_value = dot(c1,c2);
            printf("The DOT product of complex numbers c1,c2 is DOT(c1,c2): %.2f\n",dot_value);
        }
        else if(strcmp(input,"COS")==0){
            float cos_value = COS(c1,c2);
            printf("The COS Value of complex numbers c1,c2 is COS(c1,c2): %.2f\n",cos_value);
        }
    }
    return 0;
}