#ifndef _SONG_H
#define _SONG_H

typedef struct Song{
    char* name;
    char* artist;
    float duration;
    // struct Song* next;
    // int index;
}song;

song* makeSong(char* name,char* artist,float duration);
#endif