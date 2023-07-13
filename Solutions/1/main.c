#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "my_dll.h"
// #include "node.h"

//CREATE LIST AND INITIALISE IT ==> create_list()
//CREATES A NODE AND INITIALISES IT ==> create_node()

int main(){
    my_dll* list = create_list();
    char input[1000];
    int num;
    while(1){
        scanf("%s",input);
        if(strcmp(input,"print")==0){
            print(list);
        }
        else if(strcmp(input,"print_reverse")==0){
            print_reverse(list);
        }
        else if(strcmp(input,"get_size")==0){
            int size = get_size(list);
            printf("Current size of Linked List: %d\n",size);
        }
        else if(strcmp(input,"prune")==0){
            prune(list);
        }
        else if(strcmp(input,"find")==0){
            scanf("%d",&num);
            int position = find(list,num);
            printf("Position of the Element: %d\n",position);
        }
        else if(strcmp(input,"delete")==0){
            scanf("%d",&num);
            delete(list,num);
        }
        else if(strcmp(input,"insert_at")==0){
            int i;
            scanf("%d %d",&num,&i);
            insert_at(list,num,i);
        }
        else if(strcmp(input,"insert")==0){
            scanf("%d",&num);
            insert(list,num);
        }
        else if(strcmp(input, "EXIT") == 0){
            break;
        }
        else{
            printf("INVALID INPUT\n");
        }
    }
    return 0;
}