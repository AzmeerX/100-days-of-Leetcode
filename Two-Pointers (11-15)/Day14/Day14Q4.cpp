class Solution {
public:
    void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
        int i = m - 1, j = n - 1, idx = m + n - 1;
        while(i >= 0 && j >= 0){
            if(a1[i] > a2[j])
                a1[idx--] = a1[i--];
            else
                a1[idx--] = a2[j--];
        }

        while(i >= 0) a1[idx--] = a1[i--];
        while(j >= 0) a1[idx--] = a2[j--];
    }
};