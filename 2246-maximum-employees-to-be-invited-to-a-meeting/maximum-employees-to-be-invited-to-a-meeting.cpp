class Solution {
public:
    vector<vector<int>> g;
    vector<int> f;

    int lc() {
        vector<int> lv(f.size(), -1);
        int ans = 0;
        int t = 0;

        for (int i = 0; i < f.size(); ++i) {
            if (lv[i] == -1) {
                int start = t;
                int cur = i;
                while (lv[cur] == -1) {
                    lv[cur] = t++;
                    cur = f[cur];
                }
                if (lv[cur] >= start) {
                    ans = max(ans, t - lv[cur]);
                }
            }
        }
        return ans;
    }

    int gs() {
        int ans = 0;
        g.resize(f.size());
        for (int i = 0; i < f.size(); ++i) {
            g[f[i]].push_back(i);
        }
        for (int i = 0; i < f.size(); ++i) {
            if (f[f[i]] == i) {
                ans += dfs(f[i], i) + dfs(i, f[i]);
            }
        }
        return ans / 2;
    }

    int dfs(int node, int be) {
        int best = 0;
        for (auto &e : g[node]) {
            if (e != be)
                best = max(best, dfs(e, be));
        }
        return best + 1;
    }

    int maximumInvitations(vector<int> &favorite) {
        f = favorite;
        return max(lc(), gs());
    }
};