#include<stdio.h>
const int n = 20;
int dakota (int T[][n], int N)
{
    int s = 0;
    for (int i = 0; i < N; i++)
        s += T[i][i];
    return s;
}
int main()
{
    int T[n][n], N;
    printf("size: ");
    scanf("%d", &N);
    printf("elements: ");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &T[i][j]);
    printf("trace %d", dakota(T, N));
    return 0;
}
