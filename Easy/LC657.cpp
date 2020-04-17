//LC 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
            int x=0,y=0;
        //use x and y instead of separate counts
        for (int i =0;i<moves.size();i++)
        {
            if(moves[i] == 'L')
                x--;
            else if(moves[i] == 'R')
                x++;
            else if(moves[i] == 'U')
                y--;
            else if(moves[i] == 'D')
                y++;
        }
        return (x == 0 && y ==0);
        
    }
};