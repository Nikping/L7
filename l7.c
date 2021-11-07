﻿#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "Header.h"


void menu(int task_count)
{
	int i = 1;
	while (i <= task_count)
	{
		printf("%d. Задание %d\n", i, i);
		++i;
	}
	printf("%d. Выход \n", i);
}


void main(void)
{
	setlocale(LC_ALL, "Rus");

	_Bool close_flag = true;
	unsigned int n, index;
	char str1[] = "PVSIB";
	char substr[] = "SI";
	char str2[] = "ADD";

	while (close_flag)
	{
		menu(6);
		switch (getch())
		{
		case '1':
			system("cls");
			incrementHEapVariable();
			break;
		case '2':
			system("cls");
			printf("Введите длину массива N = ");
			scanf_s("%d", &n);
			int *arr = (int *)malloc(n * sizeof(int));
			sortHeapArray(arr, n);
			break;
		case '3':
			system("cls");
			printf("Строка - %s. Подстрока - %s \n", str1, substr);
			char *newstr = delete(str1, substr);
			printf("Строка после удаления подстроки - %s \n", newstr);
			break;
		case '4':
			system("cls");
			char *newstr1 = strcpy(str1);
			printf("Строка - %s. После копирования - %s \n", str1, newstr1);
			break;
		case '5':
			system("cls");
			char *newstr2 = strcat(str1, str2);
			printf("Строка - %s. Вторая строка - %s. \nРезультат конкатенации - %s \n", str1, str2, newstr2);
			break;
		case '6':
			system("cls");
			printf("Введите индекс для вставки ");
			scanf_s("%d", &index);
			char *newstr3 = insert(str1, str2, index);
			printf("Строка - %s. Вторая строка - %s. \nРезультат вставки - %s \n", str1, str2, newstr3);
			break;
		case '7':
			close_flag = false;
			break;
		}

	}
}

