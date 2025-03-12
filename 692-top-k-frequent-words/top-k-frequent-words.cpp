class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        // Step 1: Count frequency of each word
        unordered_map<string, int> freq;
        for (string& word : words) {
            freq[word]++;
        }

        // Step 2: Min-Heap to store top k frequent words
        auto cmp = [](const pair<int, string>& a, const pair<int, string>& b) {
            if (a.first == b.first) return a.second > b.second; // Lexicographical order
            return a.first < b.first; // Higher frequency first
        };

        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);

        for (auto& entry : freq) {
            pq.push({entry.second, entry.first});
        }

        // Step 3: Extract k most frequent words
        vector<string> result;
        while (k-- > 0 && !pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};