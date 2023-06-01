#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include<stdio.h>
#include<string.h>
#include"address.h"

//function that reads the address file and imports into the struct

int readAddress( ADDRESS address[]){
    FILE *in;
    in = fopen("address", "r");
    int i = 0;
    int result = 0;
    // while(1){
    //     printf("%d", result);
    //     result = fscanf(in, "%d", &address[i].number);
    //     printf("%d", result);
    //     if(result == EOF){
    //         break;
    //     }
    //     result = fscanf(in, "%s", address[i].name);
    //     result = fscanf(in, "%s", address[i].name_furikana);
    //     result = fscanf(in, "%s", address[i].zip_code);
    //     result = fscanf(in, "%s", address[i].address);
    //     result = fscanf(in, "%s", address[i].address_furikana);
    //     i++;
    // }
    for (i=0; ; i++){
        result = fscanf(in, "%d", &address[i].number);
        if(result == EOF){
             break;
       }
    
    fscanf(in, "%s", address[i].name);
    fscanf(in, "%s", address[i].name_furikana);
    fscanf(in, "%s", address[i].zip_code);
    fscanf(in, "%s", address[i].address);
    fscanf(in, "%s", address[i].address_furikana);

    printf("%d\n", address[i].number);
    printf("%s\n",  address[i].name_furikana);
    printf("%s\n",  address[i].zip_code);
    printf("%s\n",  address[i].address);
    printf("%s\n",  address[i].address_furikana);
    }
    
fclose(in);
return i;
}
