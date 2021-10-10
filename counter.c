#include "counter.h"

int countFromTerm()
{
    int c;
    int count = 0;
    bool start, end;
    
    start = false;
    end = false;
    while((c = getchar()) != EOF)
    {
        if (start == true)
        {
            if (c == ')')
            {
                end = true;
                break;
            } else
            {
                count++;
            }
            
        }
        if(c == '(')
        {
            start = true;
        }
    }
    if(start == true && end == true)
    {
        return count;
    }
    return -1;
}
