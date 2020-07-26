int Solution::solve(string start, string end, vector<string>& dictV) {
    unordered_set<string> dict(dictV.begin(), dictV.end());
    unordered_map<string,int>visited;
    if(dict.count(end)==0)
    {
        return 0;
    }
    // unordered_map<string, int> distance; // store the distancetance from start to the current word
    queue<string> q; // FIFO for bfs purpose
    // distance[start] = 1;
    // int level=1;
    q.push(start);
    visited[start]=1;
    while (!q.empty()) {
        string word = q.front(); 
        q.pop();
        if (word == end) {
            return visited[word];
        }
        for (int i = 0; i < word.size(); i++) {
            for (int j = 0; j < 26; j++) {
                string newWord = word;
                newWord[i] = 'a' + j;
                if (dict.count(newWord)==1&&(visited[newWord]==0)) {
                    // distance[newWord] = distance[word] + 1;
                    q.push(newWord);
                    visited[newWord]=visited[word]+1;
                }
            }
        }
    }
    return 0; // not found
}
