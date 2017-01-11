
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;
const int MAXN = 5100;
const int INF = 0x3f3f3f3f;

int dp[MAXN][1100], chops[MAXN];

int GetValue(int i)
{
    int t =  chops[i - 1] - chops[i];
    return t * t;
}

int main()
{
    int n, i, j, k, T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &k, &n);
        k += 8;
        for (i = n; i >= 1; i--)
            scanf("%d", &chops[i]);
        for (i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
            for (j = 1; j <= k; j++)
                dp[i][j] = INF;
        }
        for (i = 3; i <= n; i++)
            for (j = 1; j <= k; j++)
            {
                if (i >= j * 3 && dp[i - 2][j - 1] != INF){
                    dp[i][j] = min(dp[i - 1][j], dp[i - 2][j - 1] + GetValue(i));
                    cout<<"i:"<<i<<" j:"<<j<<" dp:"<<dp[i][j]<<"\n";
                }
            
            }
        printf("%d\n", dp[n][k]);
        
    }
    return 0;
}