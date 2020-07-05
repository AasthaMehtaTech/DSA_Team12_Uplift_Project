vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    int a = 0;
    int b = 0;
    int c = newInterval.start;
    int d = newInterval.end;
    int pos = 0;
    

    if (c>d)
        swap(c, d);
        
    vector<int> count;
    vector<Interval> overlap;
    

    if (intervals.empty())
    {
        overlap.push_back(newInterval);
        return overlap;
    }
        
    for(int i = 0; i<intervals.size(); ++i)
    {
        a = intervals[i].start;
        b = intervals[i].end;
        
        if (max(a,c)>min(b,d))
            continue;
        else
        {
            count.emplace_back(i);
        }
    }
    
    if(count.empty())
    {
        int t1 = intervals[0].start; int t2 = intervals[intervals.size()-1].end;

        if (d<t1)
        {
            vector<Interval>::iterator it1;
            it1 = intervals.begin();
            intervals.insert(it1, Interval(c, d));
            return intervals;
        }

        else if(c>t2)
        {
            intervals.emplace_back(Interval(c, d));
            return intervals;
        }
     
        else
        {
            for (int j = 0; j<intervals.size(); ++j)
            {
                if (intervals[j].start > d)
                {
                    pos = j;
                    break;
                }
            }
            vector<Interval>::iterator it2;
            it2 = intervals.begin() + pos;
            intervals.insert(it2, Interval(c, d));
            return intervals;
        }
    }
    

    for (int x = 0; x < count[0]; ++x)
    {
        overlap.emplace_back(intervals[x]);
    }
    
    int cend = count.size() - 1;
    int temp = cend-count[0];
    int nS = min(intervals[count[0]].start, c);
    int nE = max(intervals[count[cend]].end, d);
    Interval I(nS, nE);
    overlap.emplace_back(I);
    
    for(int z = (count[cend]+1); z < intervals.size(); ++z)
    {
        overlap.emplace_back(intervals[z]);
    }
   
    return overlap;
}

