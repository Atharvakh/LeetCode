 string reverseWords(string s) {
        stringstream ss(s);
        vector <string> vec;
        string temp;
        while(ss >> temp)
        {
            vec.push_back(temp);
        }
        string ans;
        for(int i=vec.size()-1;i>=0;i--)
        {
            ans+=vec[i]+" ";
        }
    return ans.substr(0, ans.length() - 1);    
    }