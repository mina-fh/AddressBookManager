#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include<stdio.h>
#include<string.h>
#include"address.h"

void writeResult( int count , ADDRESS address[]){
    FILE *out;
    out = fopen("result", "w");
    write(out, count, address);
    fclose(out);
}