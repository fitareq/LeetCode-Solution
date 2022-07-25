#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> sentences = {"please wait", "continue to fight", "continue to win"};
    int mostWord = 0, mostWordTemp = 0;
    for(int i=0; i<sentences.size(); i++)
    {
        for(int j=0; j<sentences[i].length(); j++)
        {
            if(sentences[i][j] == ' ')
                ++mostWordTemp;
        }
        ++mostWordTemp;
        if(mostWord < mostWordTemp)
            mostWord = mostWordTemp;
        mostWordTemp = 0;
    }
    cout<<mostWord;
    return 0;
}
