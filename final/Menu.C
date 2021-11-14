#include <stdio.h>
#include <stdlib.h>

#include "main.h"

//显示功能菜单,返回选择的菜单项
int Menu()
{
	int menuitem ;
	int item;
	while(1)
	{
		menuitem = -1;
		item = -1;
		while ( menuitem != 1 && menuitem != 2 && menuitem != 3 )
		{
			system("cls");	//清屏 
			printf("\n\t\t   主功能菜单\n") ;	
			printf("\t\t***********************\n");	
			printf("\n\t\t1. 成绩排序\n");
			printf("\t\t2. 不及格成绩统计\n");
			printf("\t\t3. 查找\n");
			printf("\t\t0. 退出\n\n");
			printf("\t\t***********************\n");
			printf("\t\t请选择(0-3):");
			scanf("%d",&menuitem);
			if (menuitem == 0) 
			{
				printf("按回车键继续...") ;
				getchar();
				getchar();
				exit(0);
			}
		}
		switch(menuitem)
		{
		case 1:
			{
				while(item != 1 && item != 2 && item != 3 && item != 4)
				{
					system("cls");	//清屏 
					printf("\n\t\t  请选择排序方式\n");
					printf("\t\t***********************\n");
					printf("\n\t\t1. 按数学成绩排序\n");
					printf("\t\t2. 按英语成绩排序\n");
					printf("\t\t3. 按计算机成绩排序\n");
					printf("\t\t4. 按总分排序\n");
					printf("\t\t0. 返回\n");
					printf("\t\t***********************\n");
					printf("\t\t请选择(0-4):");
					scanf("%d",&item);
					if (item == 0) break;
				}

				switch(item)
				{
				case 1:
					return MATH_SORT;
				case 2:
					return ENGLISH_SORT;
				case 3:
					return COMPUTER_SORT;
				case 4:
					return SUM_SORT;
				}
				break;
			}
		case 2:
			{
				while(item != 1 && item != 2 && item != 3 && item != 4)
				{
					system("cls");	//清屏 
					printf("\n\t\t  统计功能选择\n");
					printf("\t\t***********************\n");
					printf("\n\t\t1. 统计数学成绩\n");
					printf("\t\t2. 统计英语成绩\n");
					printf("\t\t3. 统计计算机成绩\n");
					printf("\t\t0. 返回\n\n");
					printf("\t\t***********************\n");
					printf("\t\t请选择(0-4):");
					scanf("%d",&item);
					if (item == 0) break;
				}

				switch(item)
				{
				case 1:
					return MATH_STATISTICS;
				case 2:
					return ENGLISH_STATISTICS;
				case 3:
					return COMPUTER_STATISTICS;
				case 4:
					return SUM_STATISTICS;
				}
				break;
			}
		case 3:
			{
				return SEARCH;
			}
		}
	}
}
