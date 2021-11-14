#ifndef _SCORE_H
#define _SCORE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#ifdef _MSC_VER
#define getch _getch
#endif

#define N				10
#define STUDENT_COUNT	50		//ѧ����

#define LESSON_MATH		0
#define LESSON_ENGLISH	1
#define LESSON_COMPUTER	2
#define LESSON_COUNT	3		//�γ���

#define SUM_SORT				0     	//���ܷ����� 
#define MATH_SORT				1		//����ѧ�ɼ����� 
#define ENGLISH_SORT			2		//��Ӣ��ɼ��ܷ����� 
#define COMPUTER_SORT			3		//��������ɼ����� 
#define SUM_STATISTICS			4		// ͳ���ܷ� 
#define MATH_STATISTICS			5		// ͳ����ѧ�ɼ�
#define ENGLISH_STATISTICS		6		// ͳ��Ӣ��ɼ�
#define COMPUTER_STATISTICS		7		// ͳ�Ƽ�����ɼ�
#define SEARCH					8		// ����

typedef struct _Student
{
	int 	id;						//ѧ��
	char 	name[N];				//����
	int 	score[LESSON_COUNT];	//�ɼ�
	int 	sum;					//�ܷ�
}Student;

//���γ̳ɼ���ѧ����������
void Sort(Student *stu , int count , int lessonId);

//�����пγ̵��ܷ�
void Sum(Student stu[] , int count);

//��ѧ������ĳһ��ѧ��
int Search(Student stu[] , int count, int studentId, Student * student);

//ͳ��ĳ�ſγ̵Ĳ���������
int Statistics(Student stu[] , int count, int lessonId);

//��ʾ��Ϣ
void ShowInfo(Student stu[] , int count);

//���ļ���ȡ���� 
void ReadData(Student stu[] , int count);

//��ʾ�˵� 
int Menu();
 
#endif
