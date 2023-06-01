#define _CRT_SECURE_NO_WARNINGS

#define MAX 200

#include<stdio.h>
#include<string.h>
#include"address.h"

int main(void) {
	ADDRESS address[MAX];/*住所データ*/
	int count = 0;/*住所の個数*/
	int flag = 0;/*ソートをやったか否か*/
	int command = 0;
	char str_command[10] = "y";

	while (1) {
		printf("MENU\n");
		printf("1: 住所録読み込み\n");
		printf("2: 住所録上書き\n");
		printf("3: ソート\n");
		printf("4: 追加\n");
		printf("5: 削除\n");
		printf("6: 結果書き込み\n");
		printf("0: 終了\n");
		printf("番号入力 > ");
		scanf("%d", &command);
		
		if (command == 1) {
			count = readAddress(address);
			flag = 0; 
		}
		else if (command == 2){
			if (flag == 0) {
				printf("ソート、追加、削除未実施です。上書きは行いません。\n");
			}
			else {
				printf("住所録を上書きしますか?(y/n)");
				scanf("%s", str_command);
				if (strcmp(str_command, "y") == 0) {
					writeAddress(count, address);
					flag = 0;
				}
			}
		}
		else if (command == 3) {
			sort(count, address);
			flag = 1;
		}
		else if (command == 4) {
			if (count >= MAX) {
				printf("住所録の上限です。これ以上追加できません。\n");
			}
			else {
				count = add(count, address);
				flag = 1;
			}
		}
		else if (command == 5) {
			count = del(count, address);
			flag = 1;
		}
		else if (command == 6) {
			writeResult(count, address);
		}
		else {
			break;
		}
	}
	return 0;
}

