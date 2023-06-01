#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include<stdio.h>
#include<string.h>
#include"address.h"

int del( int count , ADDRESS address[]){
    int num;
    printf("消したい住所録の数字を記入してください: ");
    scanf("%d", &num);
    for(int i= num; i< count; i++ ){
        address[i-1] = address[i];
    }
    count --;
    renumbering(count, address);
    return count;

}