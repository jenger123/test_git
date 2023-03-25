// Шаги, выполняемые в этом файле будут отражены в Git

#include <iostream>
using namespace std;

void ToLowerCase(char str[], int strsize)
{
    for (int i = 0; i < strsize; i++)
    {
        if (int(str[i]) <= 90 && int(str[i]) >= 65)
            str[i] = char(int(str[i] + 32));
    }
}

char *  DeleteSpaces(char InputStr[], int ArraySize)
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
        int str1size = 0;
    for (int i{}; str1[i] != '\0'; i++)
        str1size++;
    ToLowerCase(str1, str1size + 1);
    for (int i{}; str1[i] != '\0'; i++)
        cout << str1[i];
    delete[] str1;
    system("pause");
    return 0;
}


