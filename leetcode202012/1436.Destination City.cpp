class Solution1 {
public:
    string destCity(vector<vector<string>>& paths) {
        int len = paths.size();
        int i=0;
        int j=0;
        bool if_dest = false;
        for(i=0; i<len; ++i)
        {
            if_dest = true;
            for(j=0; j<len; ++j)
            {
                if(i != j && paths[i][1] == paths[j][0])
                {
                    if_dest = false;
                    break;
                }
            }

            if(if_dest)
            {
                break;
            }
        }

        return paths[i][1];
    }
};

class Solution2 {
public:
    string destCity(vector<vector<string>>& paths) {
        int len = paths.size();
        int i=0;
        unordered_set<string> src_set;
        for(auto path:paths)
        {
            src_set.insert(path[0]);
        }
        
        for(auto path:paths)
        {
            if(0 == src_set.count(path[1]))
            {
                break;
            }
        }
        return paths[i][1];
    }
};