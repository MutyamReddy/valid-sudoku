class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& A) {
         int r=A.size();
         int c=A[0].size();
        unordered_set<string>s;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(A[i][j]=='.') continue;
                string ch=to_string(A[i][j]);
                string row="("+to_string(i)+")"+ch;
                string col=ch+"("+to_string(j)+")";
                string box="("+to_string(i/3)+ch+to_string(j/3)+")";
                if(s.find(row)!=s.end()||s.find(col)!=s.end()||s.find(box)!=s.end()){
                    return false;
                }else{
                    s.insert(row);
                    s.insert(col);
                    s.insert(box);
                }
            }
        }
        return true;
    }
};
