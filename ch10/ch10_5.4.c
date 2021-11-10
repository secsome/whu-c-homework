#include <stdio.h>
#include <malloc.h>

typedef struct _Node
{
    int Value;
    struct _Node* Next;
} Node;

typedef struct _ChainedList
{
    Node* First;
} ChainedList;

Node* Insert_To_List(Node* pLast, int Value)
{
    if (pLast == NULL)
    {
        pLast = malloc(sizeof(Node));
        pLast->Value = Value;
        pLast->Next = NULL;
        return pLast;
    }
    else
    {
        pLast->Next = malloc(sizeof(Node));
        pLast->Next->Value = Value;
        pLast->Next->Next = NULL;
        return pLast->Next;
    }
}

int main()
{
    ChainedList list; list.First = NULL;
    int n;
    Node* pNode = NULL;

    while (scanf("%d", &n) == 1 && n != -1)
    {
        pNode = Insert_To_List(pNode, n);
        if (list.First == NULL)
            list.First = pNode;
    }

    for (Node* i = list.First; i; i = i->Next)
        printf("%d ", i->Value);

    return 0;
}