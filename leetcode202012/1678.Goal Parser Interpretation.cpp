class Solution {
public:
    string interpret(string command) {
        unsigned char i = 0;
        bool left_bucket = false;
        string ret_str = "";
        for(i=0; i<command.size(); ++i)
        {
            if('(' == command[i])
            {
                left_bucket = true;
                continue;
            }
            else if(')' == command[i])
            {
                if(true == left_bucket)
                {
                    ret_str += 'o';
                }
            }
            else
            {
                ret_str += command[i];
            }

            left_bucket = false;
        }

        return ret_str;
    }
};