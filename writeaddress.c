# define _CRT_SECURE_NO_WARNINGS
# define MAX 200
#include<stdio.h>
#include<string.h>
#include"address.h"

void writeAddress( int count , ADDRESS address[]){
    FILE *out;
    out = fopen("address", "w");
    write(out, count, address);
    fclose(out);
}