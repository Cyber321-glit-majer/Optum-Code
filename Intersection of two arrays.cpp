int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int>v;
        for(int i=0;i<n;i++)
        {
            v.insert(a[i]);
        }
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            if(v.find(b[i])!=v.end())
            {
                cnt++;
            }
            v.erase(b[i]);
        }
        return cnt;
    }
