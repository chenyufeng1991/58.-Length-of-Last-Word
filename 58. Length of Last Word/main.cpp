//
//  main.cpp
//  58. Length of Last Word
//
//  Created by chenyufeng on 10/4/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s)
{
    reverse(s.begin(), s.end());
    int result = 0;

    int startIndex = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            startIndex = i;
            break;
        }
    }

    for (int i = startIndex; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            result++;
        }
        else
        {
            break;
        }
    }

    return result;
}

int main(int argc, const char * argv[])
{
    return 0;
}
