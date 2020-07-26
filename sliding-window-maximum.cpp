#define loop(i,s,e) for(int i = s; i < e; i++)
vector<int> Solution::slidingMaximum(const vector<int> &a, int k) {
    int n=a.size();
    vector<int>o;
   deque<int>q(k);
   int i=0;
   loop(i,0,k)
   {
       while(!q.empty()&&a[i]>=a[q.back()])
       {
           q.pop_back();
       }
       q.push_back(i);
   }
   for(i=k;i<n;i++)
   {
       o.push_back(a[q.front()]);
       //1) remove elements out of window
       while(!q.empty()&&q.front()<=(i-k))
       {
           q.pop_front();
       }
       //2) remove elements which are less
       while(!q.empty()&&a[i]>=a[q.back()])
       {
           q.pop_back();
       }
       //3) ADD NEW
       q.push_back(i);
   }
   o.push_back(a[q.front()]);
   return o;
}
