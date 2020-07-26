struct cell{
  int x;
  int y;
  int dist;
  cell(int a,int b,int c)
  {
      x=a;
      y=b;
      dist=c;
  }
};
bool isinside(int x,int y,int A,int B)
{
    if(x<0||x>=A||y<0||y>=B)
    {
        return false;
    }
    return true;
}
int Solution::knight(int A, int B, int C, int D, int E, int F) {
    int dx[]={2,1,-1,-2,-2,-1,1,2};
    int dy[]={1,2,2,1,-1,-2,-2,-1};
    queue<cell>q;
    map<pair<int,int>,bool>visited;
    cell src=cell(C-1,D-1,0);
    visited[make_pair(C-1,D-1)]=true;
    q.push(src);
    while(!q.empty())
    {
        cell c=q.front();
        q.pop();
        if(c.x==E-1&&c.y==F-1)
        {
            return c.dist;
        }
        for(int i=0;i<8;i++)
        {
            int x=c.x+dx[i];
            int y=c.y+dy[i];
            cell t=cell(x,y,c.dist+1);
            if(visited[make_pair(x-1,y-1)]==false&&isinside(x,y,A,B))
            {
                visited[make_pair(x-1,y-1)]=true;
                q.push(t);
            }
        }
    }
    return -1;
}
