#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool fistIsEven = (coordinates[0] - 'a' + 1) % 2 == 0;
        bool secondIsEven = (coordinates[1] - '0') % 2 == 0;
        
        if((fistIsEven && secondIsEven) || (!fistIsEven && !secondIsEven))
            return false;
        return true;
    }
};