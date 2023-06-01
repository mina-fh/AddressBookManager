#define _CRT_SECURE_NO_WARNINGS

#define MAX 200

#include<stdio.h>
#include<string.h>
#include"address.h"

int main(void) {
	ADDRESS address[MAX];/*�Z���f�[�^*/
	int count = 0;/*�Z���̌�*/
	int flag = 0;/*�\�[�g����������ۂ�*/
	int command = 0;
	char str_command[10] = "y";

	while (1) {
		printf("MENU\n");
		printf("1: �Z���^�ǂݍ���\n");
		printf("2: �Z���^�㏑��\n");
		printf("3: �\�[�g\n");
		printf("4: �ǉ�\n");
		printf("5: �폜\n");
		printf("6: ���ʏ�������\n");
		printf("0: �I��\n");
		printf("�ԍ����� > ");
		scanf("%d", &command);
		
		if (command == 1) {
			count = readAddress(address);
			flag = 0; 
		}
		else if (command == 2){
			if (flag == 0) {
				printf("�\�[�g�A�ǉ��A�폜�����{�ł��B�㏑���͍s���܂���B\n");
			}
			else {
				printf("�Z���^���㏑�����܂���?(y/n)");
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
				printf("�Z���^�̏���ł��B����ȏ�ǉ��ł��܂���B\n");
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

