class Solution {
public:
    long long flowerGame(int n, int m) {
        return(long long)n*m/2;
       
    }
};
//The actual logic is total possible pairs that can be generated 
//is n*m and as Alice starts first she gets all odd chances so, 
//n+m should be odd and n*m/2 should be the pairs in which Alice
//wins the game.