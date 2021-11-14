#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "main.h"

int main()
{
	Student stu[STUDENT_COUNT];
	int menuitem;

	//清屏
	system("cls");	 
	//读入学生信息
	ReadData(stu, STUDENT_COUNT);

	//计算学生总成绩
	Sum(stu, STUDENT_COUNT);

	while(1)
	{
		//显示功能菜单,并获得选择的菜单项
		menuitem = Menu();

		switch(menuitem)
		{
		//按总分排序
		case SUM_SORT:
		{
			Sort(stu, STUDENT_COUNT, LESSON_COUNT); // 利用结构体在内存中的存储
			ShowInfo(stu, STUDENT_COUNT);
			break;
		}

		//按数学成绩排序
		case MATH_SORT:
		{
			Sort(stu, STUDENT_COUNT, LESSON_MATH);
			ShowInfo(stu, STUDENT_COUNT);
			break;
		}

		//按英语成绩排序
		case ENGLISH_SORT:
		{
			Sort(stu, STUDENT_COUNT, LESSON_ENGLISH);
			ShowInfo(stu, STUDENT_COUNT);
			break;
		}

		//按计算机成绩排序
		case COMPUTER_SORT:
		{
			Sort(stu, STUDENT_COUNT, LESSON_COMPUTER);
			ShowInfo(stu, STUDENT_COUNT);
			break;
		}

		//统计数学成绩不及格人数
		case MATH_STATISTICS:
		{
			printf("数学不及格人数为：%d\n", Statistics(stu, STUDENT_COUNT, LESSON_MATH));

			break;
		}

		//统计英语成绩不及格人数
		case ENGLISH_STATISTICS:
		{
			printf("英语不及格人数为：%d\n", Statistics(stu, STUDENT_COUNT, LESSON_ENGLISH));
			
			break;
		}

		//统计计算机成绩不及格人数
		case COMPUTER_STATISTICS:
		{
			printf("计算机不及格人数为：%d\n", Statistics(stu, STUDENT_COUNT, LESSON_COMPUTER));
			break;
		}

		//按学号搜索学生，并显示学生成绩
		case SEARCH:
		{
			system("cls");
			Student ret;
			int id;
			printf("请输入要查找成绩的学生的学号：");
			scanf("%d", &id);
			if (Search(stu, STUDENT_COUNT, id, &ret))
			{
				printf("学号：%08d\t姓名：%s\t数学成绩：%03d\t英语成绩：%03d\t计算机成绩：%03d\t总成绩：%03d\n",
					ret.id, ret.name, ret.score[0], ret.score[1], ret.score[2], ret.sum);
			}
			else
				printf("未找到学生相关的信息！\n");

			break;
		}
		default:
			break;

		}

		system("pause");
	}
}


/************************************************************************************************/
//Sort function
//功能：排序
//参数：Student stu[]
//		int count：要排序的学生数目
//		int lessonId：要排序的课程编号
//				数学:LESSON_MATH; 英语:LESSON_ENGLISH;计算机:LESSON_COMPUTER;总分:LESSON_COUNT
/************************************************************************************************/
void Sort(Student stu[] , int count , int lessonId)
{
	int i, j;
	for (i = 0; i < count; ++i)
		for (j = i; j < count; ++j)
			if (stu[i].score[lessonId] < stu[j].score[lessonId])
			{
				Student tmp = stu[i];
				stu[i] = stu[j];
				stu[j] = tmp;
			}
}

/************************************************************************************************/
//功能：按学号搜索学生
//参数：Student stu[]:学生 
//		int count：学生数目
//		int studentId：要搜索的学号
//		Student * student: 搜索到的学生
//返回值：如果搜索到的学生返回1，否则返回0
/************************************************************************************************/
int Search(Student stu[] , int count, int studentId, Student * student)
{
	for (int i = 0; i < count; ++i)
		if (studentId == stu[i].id)
		{
			*student = stu[i];
			return 1;
		}
	return 0;
}

/************************************************************************************************/
//功能：计算所有课程的总分
//参数：Student stu[]
//		int count：学生数目
/************************************************************************************************/
void Sum(Student stu[] , int count)
{
	int i, j;
	for (i = 0; i < count; ++i)
	{
		stu[i].sum = 0;
		for (j = 0; j < LESSON_COUNT; ++j)
			stu[i].sum += stu[i].score[j];
	}
}


/************************************************************************************************/
//功能：统计不及格人数
//参数：Student stu[]
//		int count：要排序的学生数目
//		int lessonId：要排序的课程编号
//返回值：不及格人数
/************************************************************************************************/
int Statistics(Student stu[], int count, int lessonId)
{
	system("cls");

	int ret = 0;
	for (int i = 0; i < STUDENT_COUNT; ++i)
		if (stu[i].score[lessonId] < 60)
			++ret;
	return ret;
}

/************************************************************************************************/
//功能：显示学生信息
//参数：Student stu[]
//		int count：学生数目
//返回值：无
/************************************************************************************************/
void ShowInfo(Student stu[] , int count)
{
	system("cls");
	printf("学号\t\t姓名\t\t数学成绩\t英语成绩\t计算机成绩\t总成绩\n");
	for (int i = 0; i < count; ++i)
	{
		printf("%08d\t%s\t\t%03d\t\t%03d\t\t%03d\t\t%03d\n",
			stu[i].id, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].sum);
	}
}

