class Solution {
public:
    int numRabbits(vector<int>& answers) {
    unordered_map<int, int> freq;
    for (int ans : answers) {
        freq[ans]++;
    }
    
    int result = 0;
    for (auto& pair : freq) {
        int k = pair.first;
        int count = pair.second;
        int groupSize = k + 1;
        int numGroups = ceil((double)count / groupSize);
        result += numGroups * groupSize;
    }
    return result;
}
};