#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visit[1005];
int level[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int chil : v[par])
        {
            if (visit[chil] == false)
            {
                q.push(chil);
                visit[chil] == true;

                level[chil] = level[par] + 1;
                parent[chil] = par;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, dis;
    cin >> src >> dis;
    memset(visit, false, sizeof(visit));
    memset(level, 0, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(src);
    int x = dis;
    while (x != -1)
    {
        cout << x << " ";
        x = parent[x];
    }

    return 0;
}