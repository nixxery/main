#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

printf("���");

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("������� ��� ����������� ������� ��� ���� ����� m � n, ������� ������ �� ������������\n");
    int m, n, nok, i;

    printf("������� m:");
    scanf("%d", &m);
    printf("������� n:");
    scanf("%d", &n);

    nok = m*n;
    for(i = nok; i > 0; i--)
    {
        if (i % m==0 && i % n ==0)
        {
         nok = i;
        }
    }
    int r = 0;
    while (r < m*n)
    {
        r = r + nok;
        printf("%d \n", r);
    }
    return 0;
}
