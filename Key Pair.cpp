	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	 unordered_set<int>v;
	  for(int i=0;i<n;i++)
	  {
	      int b=x-arr[i];
	      if(v.find(b)!=v.end())
	      return 1;
	      v.insert(arr[i]);
	  }
	  return 0;
	}
