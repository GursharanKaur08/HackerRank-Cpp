#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{   
    int max;
    max = (a > b ? a : b);
    max = (c > d? (c>max? c:max) : (d>max? d:max));
    return max;
}
int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

