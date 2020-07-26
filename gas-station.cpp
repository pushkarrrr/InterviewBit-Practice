int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int n=gas.size();
    int start=0;
    int end=1;
    int balance=gas[start]-cost[start];
    while(start!=end||balance<0)
    {
        while(start!=end&&balance<0)
        {
            balance=balance-(gas[start]-cost[start]);
            start=(start+1)%n;
            if(start==0)
            {
                return -1;
            }
        }
        balance+=gas[end]-cost[end];
        end=(end+1)%n;
    }
    return start;
}
