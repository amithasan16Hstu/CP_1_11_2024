#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDraws(int p1, int p2, int p3) {
    // Sum of scores must be even, else not possible
    if ((p1 + p2 + p3) % 2 != 0) return -1;
    
    // Maximum points any two players can have (as total points are shared by wins/losses or draws)
    int maxGames = (p1 + p2 + p3) / 2;
    
    // Check if the scores are feasible given the constraint of scores being in non-decreasing order
    if (p3 > p1 + p2) return -1;
    
    // Calculate the maximum possible number of draws
    return maxGames - (p3 - p1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        
        cout << maxDraws(p1, p2, p3) << endl;
    }
    return 0;
}
