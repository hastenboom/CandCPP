# strerror
>ʾ��
```
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
    FILE *fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("Error: %s\n", strerror(errno));
    }
    
    return 0;
}
```

# perror
>ʾ��
```
#include <stdio.h>
#include <iostream>

int main()
{
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("abaaba");
    }
    system("pause");
    return 0;
}
```