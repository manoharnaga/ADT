#ifndef _MUSICPLAYER_H
#define _MUSICPLAYER_H

#include "song.h"

typedef struct node{
    song* s;
    struct node* next;
}node;

typedef struct MusicPlayer{
    song* curr_song;
    void* head;//head of the list
}MusicPlayer;

MusicPlayer* createMusicPlayer();
int listsize(MusicPlayer* msp);//NOT IN THE QUESTION
int addSongToQueue(MusicPlayer* msp,song* s);
int removeSongFromQueue(MusicPlayer* msp,int i);
int playSong(MusicPlayer* msp);
song* getCurrentSong(MusicPlayer* msp);

#endif