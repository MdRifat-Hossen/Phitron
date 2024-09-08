#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visit[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
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
            }
        }
    }
}
int main()
{
    int a, e;
    cin >> a >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    bfs(src);

    return 0;
}