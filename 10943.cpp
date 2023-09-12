#include <cstdio>
#include <cstring>
using namespace std;
int N, K, memo[110][110];
int ways(int N, int K)
{
    if (K == 1)
        return 1;
    else if (memo[N][K] != -1)
        return memo[N][K];
    int total_ways = 0;
    for (int split = 0; split <= N; split++)
        total_ways = (total_ways + ways(N - split, K - 1)) % 1000000;
    return memo[N][K] = total_ways;
}
int main()
{
    memset(memo, -1, sizeof memo);
    while (scanf("%d %d", &N, &K), (N || K))
        printf("%d\n", ways(N, K));
    return 0;
}
