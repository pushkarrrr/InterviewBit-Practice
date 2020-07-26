bool issafe(vector<vector<string>>board,int i,int j,int n)
    {
        //check column
        for(int row=0;row<i;row++)
        {
            if(board[row][j]=="Q")
            {
                return false;
            }
        }
        //left diagonal
        int x=i;
        int y=j;
        while(x>=0&&y>=0)
        {
            if(board[x][y]=="Q")
            {
                return false;
            }
            x--;
            y--;
        }
        //right diagonal
        x=i;
        y=j;
        while(x>=0&&y<n)
        {
            if(board[x][y]=="Q")
            {
                return false;
            }
            x--;
            y++;
        }
        return true;
    }
    bool nqueens(vector<vector<string>>&ans,vector<vector<string>>board,int i,int n)
    {
        if(i==n)
        {
            vector<string> row;
            ans.push_back(row);
            string temp="";
            int k=ans.size();
            for(int l=0;l<n;l++){
                temp="";
             for(int m=0;m<n;m++){
                temp+=board[l][m];
              }
              ans[k-1].push_back(temp);
            }   
            return false;
        }
        for(int j=0;j<n;j++)
        {
            if(issafe(board,i,j,n))
            {
                board[i][j]="Q";
            bool aagevala=nqueens(ans,board,i+1,n);
            if(aagevala)
            {
                return true;
            }
            board[i][j]=".";
            }
        }
        return false;
    }
vector<vector<string> > Solution::solveNQueens(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout wwple_codes/ for more details
    vector<vector<string>>a;
    if(n==2||n==3)
    {
        return a;
    }
    vector<vector<string> > ans;
    vector<vector<string> > board( n , vector<string> (n, "."));
    nqueens(ans,board,0,n);
    return ans;
    
}
