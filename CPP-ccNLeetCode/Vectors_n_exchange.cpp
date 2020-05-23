class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.size() == 1){
            arr[0]= -1;
            return arr;
        }

        
        for (int i = arr.size(), m= -1; i >= 0; --i)
        {
           arr[i] = exchange(m, max(m, arr[i]));
        }
        int last = arr.size() -1;
        arr[last] = -1;
        return arr;
        
    }
};