class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) 
    {
        int n = access_times.size();
        vector<string>v;
        unordered_map<string,vector<int>>m;
        //push the names over the timings
        for(auto &it:access_times)
        {
           int time = stoi(it[1]);
            m[it[0]].push_back(time);
        }
        //sorting the timings
        for(auto &it:m)
        {
            sort(it.second.begin(),it.second.end());
        }
        for(auto &it:m)
        {
            vector<int>time=it.second;
            for(int i=2;i<time.size();i+=1)
            {
                if(time[i]-time[i-2])
                {
                    v.push_back(it.first);
                    break;
                }
            }
        }
        return v;
    }
};
