class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        queue <int> Q;
        int fid;
        for(int i=0;i<tickets.size();++i)
        {
            Q.push(i);
        }
        while(!Q.empty())
        {
            fid = Q.front();
            Q.pop();
            tickets[fid]--;
            count++;
            if(tickets[fid]>0)
            {
                Q.push(fid);
            }
                
            if(tickets[k]==0)
            {
                return count;
            }
                
        }
        
        return count;
    }
};