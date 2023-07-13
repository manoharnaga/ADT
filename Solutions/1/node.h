#ifndef _NODE_H
#define _NODE_H

typedef struct node{
    int data;
    struct node* prev;
    struct node* next;
}node;

node* create_node();
//Will create New Node and Assign the pointer to NULL ==> then return the pointer
#endif