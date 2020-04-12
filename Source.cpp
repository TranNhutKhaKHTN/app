#include <stdio.h>
#include <math.h>

void nhap(int &n);
void nhap(int& n) {
    do {
        printf("\nNhap n ");
        scanf_s("%d", &n);
    } while (n < 5);
}

void ngto(int& n);
void ngto(int& n) {
    int j, i, S1 = 1;
    for (j = 1; j <= n; ++j)
    {
        int count = 0;
        for (i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && j > 1) {
            S1 = S1 * j;
        }
    }printf("\nS1 = %d", S1);
}

int main()
{
    int n, m;
    nhap(n);
    printf_s("%d", n);
    ngto(n);
    return 0;
    scanf_s("%d", &m);
    printf("trannhutkha");
}
