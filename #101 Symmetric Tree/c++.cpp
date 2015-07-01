class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int n = matrix.size();
        for (int layer = 0; layer < n/2; layer++){
            int first = layer;
            int last  = n-1-layer; 
            for (int i=first;i<last;i++){
                int offset = i-first;
                int top = matrix[first][i];
                //lower-left->upper-right           
                matrix[first][i]=matrix[last-offset][first];
                //lower-left->upper-left
                matrix[last-offset][first] = matrix[last][last-offset];
                //upper-right->lower-right
                matrix[last][last-offset] = matrix[i][last];
                //upper-left->upper-right
                matrix[i][last] = top;
            }
        }
         
    }
};