#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "complex.h"

/*
complex* Cxcreate(int n){
    complex* c = (complex*)malloc(sizeof(complex));
    assert(c!=NULL);
    c->arr = (double*)malloc(sizeof(double)*n);
    assert(c->arr!=NULL);
    c->size = n;
    return c;
}
complex* Cxinput(complex* c){
    int n=c->size;
    double temp;
    for(int i=0;i<n;i++){
        scanf("%lf",&temp);
        c->arr[i] = temp;
    }
    return c;
}
void Cxprint(const complex* c){
    for(int i=0;i<c->size;i++){
        printf("%.2lf ",c->arr[i]);
    }
    printf("\n");
}
*/

complex add(const complex c1,const complex c2){
    int n = c1.size;
    //COMPLEX C
    complex c;
    c.arr = (double*)malloc(sizeof(double)*n);
    assert(c.arr!=NULL);
    c.size = n;
    //COMPLEX C
    for(int i=0;i<n;i++){
        c.arr[i] = c1.arr[i] + c2.arr[i];
    }
    return c;
}

complex sub(const complex c1,const complex c2){
    int n=c1.size;
    //COMPLEX C
    complex c;
    c.arr = (double*)malloc(sizeof(double)*n);
    assert(c.arr!=NULL);
    c.size = n;
    //COMPLEX C
    for(int i=0;i<n;i++){
        c.arr[i] = c1.arr[i] - c2.arr[i];
    }
    return c;
}

float mod(const complex c){
    long double sum=0;
    for(int i=0;i<c.size;i++){
        sum += c.arr[i]*c.arr[i];
    }
    sum = sqrt(sum);
    return sum;
}

float dot(const complex c1,const complex c2){
    int n=c1.size;
    long double sum=0;
    for(int i=0;i<n;i++){
        sum += (c1.arr[i]*c2.arr[i]);
    }
    return sum;
}

float COS(const complex c1,const complex c2){
    float dot_val = dot(c1,c2);
    float mod_val = mod(c1)*mod(c2);
    if(mod_val==0) return 0;
    return (dot_val/mod_val);
}


