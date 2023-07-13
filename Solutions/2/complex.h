#ifndef _COMPLEX_H
#define _COMPLEX_H

typedef struct _complex{
    int size;
    double* arr;
}complex;

/*
//CREATES THE EMPTY n-tuple COMPLEX NUMBER USING malloc AND RETURNS A POINTER TO IT;
complex* Cxcreate(int n);
//TAKES THE INPUT FROM THE USER FOR THE n-tuple COMPLEX NUMBER
complex* Cxinput(complex* c);
//PRINTS A n-tuple COMPLEX NUMBER OF size=c->size;
void Cxprint(const complex* c);
*/

complex add(const complex c1,const complex c2);
complex sub(const complex c1,const complex c2);
float mod(const complex c);
float dot(const complex c1,const complex c2);
float COS(const complex c1,const complex c2);
#endif