// Шаги, выполняемые в этом файле будут отражены в Git

#include <iostream>
using namespace std;


char*  DeleteSpaces(char InputStr[], int ArraySize)
{
    int ptr1 = 0, spaces = 0, ptr2 = ArraySize-2;
    while (InputStr[ptr1] == ' ')
    {
        ptr1++;
        spaces++;
    }
    while (InputStr[ptr2] == ' ')
    {
        ptr2--;
        spaces++;
    }
    for (int i = ptr1; i < ptr2; i++)
    {
        if (InputStr[i] == ' ' && InputStr[i + 1] == ' ')
            spaces++;
    }
    int OutputSize = ArraySize - spaces + 1;
    char* OutputStr = new char[OutputSize];
    OutputStr[ArraySize - spaces - 1] = '\0';
    int it = 0;
    for (int i = ptr1; i <= ptr2; i++)
    {
        if (InputStr[i] == ' ' && InputStr[i + 1] == ' ')
            continue;

        else
        {
            OutputStr[it] = InputStr[i];
            it++;
        }
    }
    return OutputStr;
}

int main()
{
    setlocale(LC_ALL, "rus");
    char str[] = "    hi       my    name is    Leonid   ";
    auto SizeStr = sizeof(str) / sizeof(str[0]);
    char* str1 = DeleteSpaces(str, SizeStr);
    for (int i{}; str1[i] != '\0'; i++)
        cout << str1[i];
    delete[] str1;
    system("pause");
    return 0;
}


