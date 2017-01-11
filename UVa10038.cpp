/*UVa: 0.012s*/
/*POJ: 16ms,184KB*/
/*ZOJ: 0ms,204KB*/

#include<cstdio>
#include<cstring>
#include<cstdlib>

int arr[3010], vis[3010];

int main(void)
{
    int n, i;
    while (~scanf("%d", &n))
    {
        memset(vis, 0, sizeof(vis));
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        bool flag = true;
        for (i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) >= n)
            {
                flag = false;
                break;
            }
            if (vis[abs(arr[i] - arr[i - 1])]++) ///小技巧~
            {
                flag = false;
                break;
            }
        }
        puts(flag ? "Jolly" : "Not jolly");
    }
    return 0;
}