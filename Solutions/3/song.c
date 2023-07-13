#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "song.h"

song* makeSong(char* name,char* artist,float duration){
    song* s = (song*)malloc(sizeof(song));
    s->name = (char*)malloc(sizeof(char)*100);
    s->artist = (char*)malloc(sizeof(char)*100);
    strcpy(s->artist,artist);
    strcpy(s->name,name);
    s->duration=duration;
    return s;
}
