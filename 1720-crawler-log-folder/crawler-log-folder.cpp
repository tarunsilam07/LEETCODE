class Solution {
public:
    int minOperations(vector<string>& logs) {
         stack<string> stack;
        
        for (const string& log : logs) {
            if (log == "../") {
                if (!stack.empty()) {
                    stack.pop();  // Go back one directory if possible
                }
            } else if (log != "./") {
                stack.push(log);  // Enter a new directory
            }
        }
        
        // The size of the stack represents the depth of the directory
        return stack.size();
    }
};