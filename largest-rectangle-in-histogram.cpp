int Solution::largestRectangleArea(vector<int> &A) {
    int n=A.size();
    stack<int>s;
    int maxarea=0;
    int area;
    int i;
    int top;
    while(i<n) //DONT INCREMENT i ON CALCULATING AREA
    {
        if(s.empty()||A[i]>=A[s.top()]) //PUSH WHILE A[i] IS BIGGER or s.empty()
        {
            s.push(i++);
        }
        else
        {
            top=s.top();         //POP AND CALCULATE AREA 
            s.pop();
            if(s.empty())        //FORMULA 1
            {
                area=A[top]*i;
            }
            else
            {
                area=A[top]*(i-s.top()-1); //FORMULA 2
            }
            if(area>maxarea)
            {
                maxarea=area;
            }
        }
    }
    while(!s.empty())    //CALCULATE REMAINING STACK ELEMENTS AREA
    {
        top=s.top();
        s.pop();
        if(s.empty())
        {
            area=A[top]*i;
        }
        else
        {
            area=A[top]*(i-s.top()-1);
        }
        if(area>maxarea)
        {
            maxarea=area;
        }
    }
    return maxarea;
}
