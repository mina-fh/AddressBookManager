# define _CRT_SECURE_NO_WARNINGS
# define MAX 200
#include<stdio.h>
#include<string.h>
#include"address.h"

int add( int count , ADDRESS address[]){
    address[count].number = count+1;
    printf("名前（漢字): ");
    scanf("%s", address[count].name);
    printf("名前（カタカナ): ");
    scanf("%s", address[count].name_furikana);
    printf("Zip Code: ");
    scanf("%s", address[count].zip_code);
    printf("Address: ");
    scanf("%s", address[count].address);
    printf("Address Furigana: ");
    scanf("%s", address[count].address_furikana);

    return count+1;
}