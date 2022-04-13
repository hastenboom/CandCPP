#include <iostream>
struct Stu
{
    char name[30];
    int age;
};

int cmp_stu(void *e1, void *e2)
{
    return (int)(((Stu *)e1)->age - ((Stu *)e2)->age);
}

void Swap(char *buf1, char *buf2, int width)
{
    for (int i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void bubble_sort(void *base, int sz, int width, int (*cmp)(void *e1, void *e2))
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (cmp((char *)base + j * width, (char *)base + (j + 1) * width) > 0)
            {
                Swap((char *)base + j * width, (char *)base + (j + 1) * width, width);
            }
        }
    }
}

int main()
{
    Stu s[3] = {{"aa", 40}, {"bb", 20}, {"cc", 30}};
    int len = sizeof(s) / sizeof(s[0]);
    // qsort(s, len, sizeof(s[0]), cmp_stu);
    bubble_sort(s, len, sizeof(s[0]), cmp_stu);
    for (int i = 0; i < 3; i++)
    {
        std::cout << s[i].name << ": " << s[i].age << std::endl;
    }

    system("pause");
    return 0;
}
