#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "musicplayer.h"

MusicPlayer* createMusicPlayer(){
    MusicPlayer* msp = (MusicPlayer*)malloc(sizeof(MusicPlayer));
    assert(msp!=NULL);
    msp->curr_song = (song*)malloc(sizeof(song));
    assert(msp->curr_song!=NULL);
    msp->curr_song = NULL;
    msp->head = NULL;
    return msp;
}


int addSongToQueue(MusicPlayer* msp,song* s){
    //CREATE NODE
    node* newnode = (node*)malloc(sizeof(node));
    newnode->s = s;
    newnode->next = NULL;
    //CREATE NODE
    if(msp->head==NULL){
        msp->head = newnode;
        return 0;
    }
    node* temp = msp->head;
    while(temp->next!=NULL){
        if(strcmp(newnode->s->name,temp->s->name)==0) return 1;
        temp=temp->next;
    }
    if(strcmp(newnode->s->name,temp->s->name)==0) return 1;
    temp->next = newnode;
    return 0;
}


int listsize(MusicPlayer* msp){
    int size=0;
    node* temp = (node*)msp->head;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    return size;
}


int removeSongFromQueue(MusicPlayer* msp,int i){
    node* temp=msp->head;
    int index=-1;//size
    while(temp!=NULL){
        index++;
        temp=temp->next;
    }
    if(i>index || i<0){
        return 1;
    }
    temp = msp->head;//MUST
    if(i==0){
        msp->head = temp->next;//(msp->head->next)==0th node is deleted
    }
    else{
        int indextemp=0;
        while(temp!=NULL){
            if((indextemp-1)==i){
                temp->next = temp->next->next;
                free(temp->next);
            }
            indextemp++;
            temp=temp->next;
        }
    }
    return 0;
}


int playSong(MusicPlayer* msp){
    node* temp=msp->head;
    if(temp!=NULL){
        msp->curr_song = temp->s;
        msp->head = temp->next;
        // free(temp);
        return 0;
    }
    else{
        msp->curr_song = NULL;
        return 1;
    }
}

song* getCurrentSong(MusicPlayer* msp){
    return msp->curr_song;
}