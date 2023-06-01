#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include<stdio.h>
#include<string.h>
#include"address.h"

void write( FILE *out , int count , ADDRESS address[]){
    int i;
    for(i = 0; i < count -1 ; i++){
        fprintf(out, "%d\n", address[i].number);
        fprintf(out, "%s\n", address[i].name);
        fprintf(out, "%s\n", address[i].name_furikana);
        fprintf(out, "%s\n", address[i].zip_code);
        fprintf(out, "%s\n", address[i].address);
        fprintf(out, "%s\n", address[i].address_furikana);
    }
    if (count > 0) {
        fprintf(out, "%d\n", address[count-1].number);
        fprintf(out, "%s\n", address[count-1].name);
        fprintf(out, "%s\n", address[count-1].name_furikana);
        fprintf(out, "%s\n", address[count-1].zip_code);
        fprintf(out, "%s\n", address[count-1].address);
        fprintf(out, "%s", address[count-1].address_furikana);
    }  
}