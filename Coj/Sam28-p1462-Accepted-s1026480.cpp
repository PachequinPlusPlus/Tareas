#include <cstdio>
int main()
{
    int n,sol = 0,suma;
    char a;
    scanf("%d",&n);
    a=getchar();
    while(n--)
    {
        suma = 0;
        while ((a=getchar())!= '\n')
            suma = (suma * 10) % 128 + ((int)a-48);
        sol = (sol + suma) % 128;
    }
    printf("%d\n",sol);
    return 0;
}