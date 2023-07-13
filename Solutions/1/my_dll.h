#ifndef _DLL_H
#define _DLL_H

#include "node.h"
typedef struct my_dll
{
    void* root;
    void* tail;
}my_dll;

my_dll* create_list();//CREATES AND INITIALISES THE LIST
void insert(my_dll* list,int x);
void insert_at(my_dll* list,int x,int i);
void delete(my_dll* list,int i);
int find(my_dll* list,int x);
void prune(my_dll* list);
void print(my_dll* list);
void print_reverse(my_dll* list);
int get_size(my_dll* list);

#endif 