bool issafe(vector<vector<char>>mat,int i,int j,int n,char number)
{
    //row n column
    for(int x=0;x<n;x++)
    {
        if(mat[x][j]==number||mat[i][x]==number)
        {
            return false;
        }
    }
    //subgrid
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;
    for(int x=sx;x<sx+rn;x++)
    {
        for(int y=sy;y<sy+rn;y++)
        {
            if(mat[x][y]==number)
            {
                return false;
            }
        }
    }
    return true;
}
bool sudokusolver(vector<vector<char>>&mat,int i,int j,int n)
{
    if(i==n)
    {
        return true;
    }
    if(j==n)
    {
        return sudokusolver(mat,i+1,0,n);
    }
    if(mat[i][j]!='.')
    {
        return sudokusolver(mat,i,j+1,n);
    }
    for(int num=1;num<=n;num++)
    {
        char number=num+'0';
        if(issafe(mat,i,j,n,number))
        {
            mat[i][j]=number;
            bool nextsafe=sudokusolver(mat,i,j+1,n);
            if(nextsafe)
            {
                return true;
            }
        }
    }
    mat[i][j]='.';
    return false;
}
void Solution::solveSudoku(vector<vector<char> > &mat) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=mat.size();
    sudokusolver(mat,0,0,n);
}
