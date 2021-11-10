#include <stdio.h>
#include <malloc.h>

typedef struct _Node
{
    char Value;
    struct _Node* Next;
} Node;

typedef struct _ChainedList
{
    Node* First;
} ChainedList;

void Insert_To_List(ChainedList* pList, char Value, char InsertBefore)
{
    if (pList->First && pList->First->Value == InsertBefore)
    {
        Node* next = pList->First;
        pList->First = malloc(sizeof(Node));
        pList->First->Value = Value;
        pList->First->Next = next;
        return;
    }

    for (Node* i = pList->First; i ; i = i->Next)
    {
        if (i->Next && i->Next->Value == InsertBefore || i->Next == NULL)
        {
            Node* next = i->Next;
            Node* prev = i;
            Node* ptr = malloc(sizeof(Node));
            if (ptr)
            {
                ptr->Value = Value;
                prev->Next = ptr;
                ptr->Next = next;
                return;
            }
        }
    }

    pList->First = malloc(sizeof(Node));
    pList->First->Value = Value;
    pList->First->Next = NULL;
}

// MSVC doesn't have this definition... So we declare it manually.
extern char* gets(char* str);

int main()
{
    ChainedList list; list.First = NULL;

    char buffer[0x100] = {0};
    while (gets(buffer) && strlen(buffer) >= 3)
        Insert_To_List(&list, buffer[0], buffer[2]);

    for (Node* pNode = list.First; pNode; pNode = pNode->Next)
        printf("%c ", pNode->Value);

    return 0;
}