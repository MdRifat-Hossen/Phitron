#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visit[1005];
// int level[1005];
void bfs(int src, int dis)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    visit[src] = true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        if (par == dis)
        {
            cout << level << endl;
        }
        for (int chil : v[par])
        {
            if (visit[chil] == false)
            {
                q.push({chil, level + 1});
                visit[chil] == true;
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
    int src;
    cin >> src;
    memset(visit, false, sizeof(visit));

    bfs(src, 6);

    return 0;
}