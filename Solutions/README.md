# **Data Structures and Algorithms**
## **Assignment 1 -- Abstract Data Types**
## ROLL.NO: 2021101128
### To compile all the codes using makefile ENTER THE COMMAND BELOW
    $ make all
    The 3 Executable Object files for 1,2 and 3 are generated as:
        - q1.out
        - q2.out
        - q3.out 
    in the Current Directory only == 2021101128/

### Command to RUN Q1
    $ ./q1.out
    HELPER FUNCTIONS USED:
        - my_dll* create_list(); --> CREATES AND INITIALISES THE LIST
        - node* create_node();   --> Will create a New Node and Assign the pointer to NULL ==> then return the pointer
        - create_node()          --> is defined in my_dll.h ONLY!!
### NOTE: "node.h" is already included in "my_dll.h", So it need not be again included in DRIVER CODE(main.c) and my_dll.c

### Command to RUN Q2
    $ ./q2.out
    Function COS(a,b) is defined CAPITAL as COS(a,b).

    USE THE BELOW CODE TO INPUT A COMPLEX NUMBER OF SIZE n:
    //COMPLEX C ==> n = n-dimensional complex number(given as INPUT)
    complex c;
    c.arr = (double*)malloc(sizeof(double)*n);
    assert(c.arr!=NULL);
    c.size = n;
    for(int i=0;i<n;i++){
        scanf("%lf",&temp);
        c.arr[i] = temp;
    }
    //COMPLEX C
### Command to RUN Q3
    $ ./q3.out
### NOTE: "typedef struct Song song" is used in all the codes in Q3--> SO "song*" is RETURNED! 
### USE "song" instead of "Song" everywhere
### Please Check the song.h for More.






