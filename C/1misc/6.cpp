#include <stdio.h>
#include <iostream>
int main()
{
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("");
    }
    system("pause");
    return 0;
}