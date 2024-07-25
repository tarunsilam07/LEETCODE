class Solution {
public:
    vector<int> sortArray(vector<int>& arr) {
       if (arr.size() > 1) {
        int mid = arr.size() / 2;
        std::vector<int> left(arr.begin(), arr.begin() + mid);
        std::vector<int> right(arr.begin() + mid, arr.end());

        sortArray(left);
        sortArray(right);

        int i = 0, j = 0, k = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                ++i;
            } else {
                arr[k] = right[j];
                ++j;
            }
            ++k;
        }

        while (i < left.size()) {
            arr[k] = left[i];
            ++i;
            ++k;
        }

        while (j < right.size()) {
            arr[k] = right[j];
            ++j;
            ++k;
        }
    }
    return arr; 
    }
};