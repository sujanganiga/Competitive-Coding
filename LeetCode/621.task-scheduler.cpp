/*class Solution {
public:
    vector<pair<char,int>>v;
    int leastInterval(vector<char>& tasks, int n) {
        for(int i=0;i<tasks.size();i++){
        int found=0;
            for(int j=0;j<v.size();j++){
                if(v[j].first==tasks[i]){
                    v[j].second=v[j].second+1;
                    found=1;
                    break;
                }
            }
            if(found==0){
                v.push_back({tasks[i],1});
            }
        }
      int maxc = 0;
      int i;
        for(i=0;i<v.size();i++){
            maxc = max(maxc, v[i].second);
        }
        int c=0;
        for(i=0;i<v.size();i++){
            if(maxc==v[i].second){
                c++;
            }
        }

    return max(int(tasks.size()),(maxc-1)*(n+1)+c);
    }
};

Time Complexity: O(n^2)
Space Complexity: O(n)



*/