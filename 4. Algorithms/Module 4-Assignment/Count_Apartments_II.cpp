#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
char grid[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
vector<int> ap;

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.';
}

void bfs(int si, int sj)
{
    int rc = 0;
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        rc++;

        int x = cur.first;
        int y = cur.second;

        for (const auto &dir : d)
        {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    ap.push_back(rc);
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                bfs(i, j);
            }
        }
    }

    sort(ap.begin(), ap.end());

    for (int size : ap)
    {
        cout << size << " ";
    }
    if (ap.empty())
    {
        cout << "0";
    }
    cout << endl;

    return 0;
}