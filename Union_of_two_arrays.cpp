class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        vector<int>ans;
        for(int i=0;i<n;i++){
            int c=a[i];
            ans.push_back(c);
        }
        for(int j=0;j<m;j++){
                        int d=b[j];
            ans.push_back(d);
        }
    sort(ans.begin(),ans.end());
      ans.erase(unique(ans.begin(),ans.end()),ans.end());

        return ans.size();
    }
};
