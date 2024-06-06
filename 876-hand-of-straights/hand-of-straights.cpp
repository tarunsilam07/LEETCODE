class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       if(hand.size()%groupSize!=0) return false;
       map<int,int>handcard;
       for(int i=0;i<hand.size();i++)
       {
        handcard[hand[i]]++;
       }
       while(!handcard.empty())
       {
        int card=handcard.begin()->first;
        for(int i=0;i<groupSize;i++)
        {
            if(handcard[card+i]==0)
            {
                return false;
            }
            handcard[card+i]--;
            if(handcard[card+i]<1)
            {
                handcard.erase(card+i);
            }
        }
       }
       return true;
       
    }
};