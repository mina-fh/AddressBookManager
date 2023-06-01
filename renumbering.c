#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "address.h"

void renumbering ( int count , ADDRESS address []) {
    int i ;
    printf (" 番 号 の 付 け 替 え を 行 い ま す 。\n ");
    for ( i = 0; i < count ; i ++ ) {
    address[ i ].number = i +1; //きれいに並べている
    printf ("%d \n " , address[ i ].number );
    printf ("%s\n " , address[ i ].name );
    printf ("%s\n " , address[ i ].name_furikana );
    printf ("%s\n " , address[ i ].zip_code );
    printf ("%s\n " , address[ i ].address );
    printf ("%s\n " , address[ i ].address_furikana );
    }
}