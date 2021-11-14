#include <stdio.h>
#include <stdlib.h>

#include "main.h"
void ReadData(Student stu[] , int count)
{
	FILE* fp;
	int i;
	char ch[10];
	if ((fp = fopen("Score.dat", "r")) == NULL)
	{
		printf("\tCan't open the file: Score.dat.\n\tPress AnyKey to Exit... ");
		getch();
		exit(0);
	}

	fscanf(fp, "%s%s%s%s%s", ch, ch, ch, ch, ch);  //跳过第一行

	for (i = 0; i < count; i++)
		fscanf(fp, "%d%s%d%d%d", &stu[i].id, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
}
