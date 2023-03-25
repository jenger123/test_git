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

int main()
{
    setlocale(LC_ALL, "rus");
    char str[] = "    hi       my    name is    Leonid   ";
    cout << str << endl;
    system("pause");
    return 0;
}


