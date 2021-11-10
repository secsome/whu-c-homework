#include <stdio.h>

typedef struct _Student
{
    char ID[0x20];
    char Name[0x100];
    int Chinese;
    int Math;
    int English;
    int Program;
    float Average;
} Student;

#define N 100

static Student Datas[N];

void Sort_Students(int n)
{
    for(int i =0;i<n;++i)
        for(int j =0;j<n;++j)
            if (Datas[i].Average < Datas[j].Average)
            {
                Student tmp = Datas[i];
                Datas[i] = Datas[j];
                Datas[j] = tmp;
            }
}

void Read_Student_Data(int i)
{
    scanf("%s %s %d %d %d %d", Datas[i].ID, Datas[i].Name, &Datas[i].Chinese, &Datas[i].Math, &Datas[i].English, &Datas[i].Program);
}

void Calculate_Averages(int n)
{
    for (int i = 0; i < n; ++i)
        Datas[i].Average = (float)(Datas[i].Chinese + Datas[i].Math + Datas[i].English + Datas[i].Program) / 4;
}

float Calculate_Chinese_Average(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += Datas[i].Chinese;
    return (float)sum / n;
}

float Calculate_Math_Average(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += Datas[i].Math;
    return (float)sum / n;
}

float Calculate_English_Average(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += Datas[i].English;
    return (float)sum / n;
}

float Calculate_Program_Average(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += Datas[i].Program;
    return (float)sum / n;
}

enum Grade
{
    Grade_A = 0,
    Grade_B,
    Grade_C,
    Grade_D,
    Grade_E,
    Grade_Count
};

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        Read_Student_Data(i);
    
    Calculate_Averages(n);
    for (int i = 0; i < n; ++i)
        printf("Student %s(%s) aver = %f\n", Datas[i].ID, Datas[i].Name, Datas[i].Average);

    int Nums_Of_People[Grade_Count] = { 0 };
    for (int i = 0; i < n; ++i)
    {
        if (Datas[i].Average >= 90)
            ++Nums_Of_People[Grade_A];
        else if(Datas[i].Average >= 80)
            ++Nums_Of_People[Grade_B];
        else if (Datas[i].Average >= 80)
            ++Nums_Of_People[Grade_C];
        else if (Datas[i].Average >= 80)
            ++Nums_Of_People[Grade_D];
        else
            ++Nums_Of_People[Grade_E];
    }
    printf(
        "\n"
        "Number of [90, 100] is %d\n"
        "Number of [80, 90) is %d\n"
        "Number of [70, 80) is %d\n"
        "Number of [60, 70) is %d\n"
        "Number of [0, 60) is %d\n",
        Nums_Of_People[Grade_A], Nums_Of_People[Grade_B], Nums_Of_People[Grade_C],
        Nums_Of_People[Grade_D], Nums_Of_People[Grade_E]
    );

    float ScoresChinese = Calculate_Chinese_Average(n);
    float ScoresMath = Calculate_Math_Average(n);
    float ScoresEnglish = Calculate_English_Average(n);
    float ScoresProgram = Calculate_Program_Average(n);
    float TotalAver = (ScoresChinese + ScoresMath + ScoresEnglish + ScoresProgram) / 4;

    printf(
        "\n"
        "Average score for Chinese = %f\n"
        "Average score for Math = %f\n"
        "Average score for English = %f\n"
        "Average score for Program = %f\n"
        "Average score for Total score = %f\n",
        ScoresChinese, ScoresMath, ScoresEnglish, ScoresProgram,
        TotalAver
    );

    int Nums_Higher_Than_Aver = 0;
    for (int i = 0; i < n; ++i)
        if (Datas[i].Average > TotalAver)
        {
            ++Nums_Higher_Than_Aver;
            printf("Student %s(%s) %d %d %d %d\n", Datas[i].ID, Datas[i].Name, 
                Datas[i].Chinese, Datas[i].Math, Datas[i].English, Datas[i].Program);
        }
    printf("Total count = %d\n", Nums_Higher_Than_Aver);

    Sort_Students(n);

    for (int i = 0; i < n; ++i)
        printf("%s %s %d %d %d %d %f\n",
            Datas[i].ID, Datas[i].Name,
            Datas[i].Chinese, Datas[i].Math, Datas[i].English, Datas[i].Program,
            Datas[i].Average);

    return 0;
}