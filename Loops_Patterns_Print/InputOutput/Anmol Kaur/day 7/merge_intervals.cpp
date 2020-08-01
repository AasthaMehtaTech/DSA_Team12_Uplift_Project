
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */


 /* solution approach:

Let the new interval to be inserted is : [a, b]
Case 1 : b < (starting time of first interval in set)
In this case simply insert new interval at the beginning of the set.

Case 2 : (ending value of last interval in set) < a
In this case simply insert new interval at the end of the set.

Case 3 : a ≤ (starting value of first interval) and b ≥ (ending value of last interval)
In this case the new interval overlaps with all the intervals, i.e., it contains all the intervals. So the final answer is the new interval itself.

Case 4 : The new interval does not overlap with any interval in the set and falls between any two intervals in the set
In this case simply insert the interval in the correct position in the set. example Input : Set : [1, 2], [6, 9]
        New interval : [3, 5]
        Output : [1, 2], [3, 5], [6, 9]

Case 5 : The new interval overlaps with the interval(s) of the set.
In this case simply merge the new interval with overlapping intervals. To have a better understanding of how to merge overlapping intervals, refer the post : Merge Overlapping Intervals

 */


 // A subroutine to check if intervals overlap or not.
 bool doesOverlap(Interval a, Interval b)
{
    return (min(a.end, b.end) >= max(a.start, b.start));
}


vector<Interval> Solution::insert(vector<Interval> &Intervals, Interval newInterval) {

     vector<Interval> ans;
    int n = Intervals.size();

    // If set is empty then simply insert
    // newInterval and return

    if(Intervals.size()==0)
    {
        ans.push_back(newInterval);
        return ans;
    }

    // Case 1 and Case 2 (new interval to be
    // inserted at corners)

    if (newInterval.end < Intervals[0].start ||
            newInterval.start > Intervals[n - 1].end)
    {
        if (newInterval.end < Intervals[0].start)
            ans.push_back(newInterval);

        for (int i = 0; i < n; i++)
            ans.push_back(Intervals[i]);

        if (newInterval.start > Intervals[n - 1].end)
            ans.push_back(newInterval);

        return ans;
    }

    // Case 3 (New interval covers all existing)
    if (newInterval.start <= Intervals[0].start &&
        newInterval.end >= Intervals[n - 1].end)
    {
        ans.push_back(newInterval);
        return ans;
    }

    // Case 4 and Case 5
    // These two cases need to check whether
    // intervals overlap or not. For this we
    // can use a subroutine that will perform
    // this function

     bool overlap = true;
    for (int i = 0; i < n; i++)
    {
        overlap = doesOverlap(Intervals[i], newInterval);
        if (!overlap)
        {
            ans.push_back(Intervals[i]);

            // Case 4 : To check if given interval
            // lies between two intervals.
            if (i < n &&
                newInterval.start > Intervals[i].end &&
                newInterval.end < Intervals[i + 1].start)
                ans.push_back(newInterval);

            continue;
        }

        // Case 5 : Merge Overlapping Intervals.
        // Starting time of new merged interval is
        // minimum of starting time of both
        // overlapping intervals.
        Interval temp;
        temp.start = min(newInterval.start,
                         Intervals[i].start);

        // Traverse the set until intervals are
        // overlapping
        while (i < n && overlap)
        {

            // Ending time of new merged interval
            // is maximum of ending time both
            // overlapping intervals.
            temp.end = max(newInterval.end,
                           Intervals[i].end);
            if (i == n - 1)
                overlap = false;
            else
                overlap = doesOverlap(Intervals[i + 1],
                                          newInterval);
            i++;
        }

        i--;
        ans.push_back(temp);
    }

    return ans;

}
