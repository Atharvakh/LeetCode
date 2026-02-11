// class Solution {
// public:
//     vector<vector<int>> funMap(string num_str){
//         vector<vector<int>> ans_map;
//         vector<int> temp_map(2);
//         int count = 0;
//         int prev_digit = -1;
        
//         for(int i = num_str.length() - 1; i >= 0; i--){
//             int temp = num_str[i] - '0';
//             if(prev_digit == -1){
//                 prev_digit = temp;
//                 count = 1;
//             }
//             else if(prev_digit == temp){
//                 count++;
//             }
//             else{
//                 temp_map[0] = count;
//                 temp_map[1] = prev_digit;
//                 ans_map.push_back(temp_map);
//                 prev_digit = temp;
//                 count = 1;
//             }
//         }
        
//         if(prev_digit != -1){
//             temp_map[0] = count;
//             temp_map[1] = prev_digit;
//             ans_map.push_back(temp_map);
//         }
        
//         return ans_map;
//     }
    
//     string countAndSay(int n) {
//         int count = 0;
//         string init = "1";
        
//         while(count < n - 1){
//             vector<vector<int>> Map = funMap(init);
            
//             string next_str = "";
//             for(int i = 0; i < Map.size(); i++){
//                 next_str += to_string(Map[i][0]);
//                 next_str += to_string(Map[i][1]);
//             }
            
//             reverse(next_str.begin(), next_str.end());
//             init = next_str;
//             count++;
//         }
//         reverse(init.begin(),init.end());
//         return init;
//     }
// };

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        
        for(int i = 1; i < n; i++){
            string next = "";
            int count = 1;
            
            for(int j = 1; j < result.length(); j++){
                if(result[j] == result[j-1]){
                    count++;
                }
                else{
                    next += to_string(count) + result[j-1];
                    count = 1;
                }
            }
            next += to_string(count) + result[result.length()-1];
            result = next;
        }
        
        return result;
    }
};