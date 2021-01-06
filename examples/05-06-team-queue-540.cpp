// UVa 540 Team Queue

#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

const int M = 1000 + 10;

void solve()
{
    int T, kase = 0;
    while (scanf("%d", &T) == 1 && T) {
        printf("Scenario #%d\n", ++kase);
        map<int, int> team;
        for (int i = 0; i != T; ++i) {
            int n;
            scanf("%d", &n);
            while (n--) {
                int x;
                scanf("%d", &x);
                team[x] = i;
            }
        }
        queue<int> Q, q[M];
        while (1) {
            char cmd[10];
            scanf("%s", cmd);
            if (cmd[0] == 'E') {
                int x;
                scanf("%d", &x);
                int t = team[x];
                if (q[t].empty())
                    Q.push(t);
                q[t].push(x);
            }
            else if (cmd[0] == 'D') {
                int t = Q.front();
                int x = q[t].front();
                printf("%d\n", x);
                q[t].pop();
                if (q[t].empty())
                    Q.pop();
            }
            else
                break;
        }
        printf("\n");
    }
}

int main()
{
    solve();
}
