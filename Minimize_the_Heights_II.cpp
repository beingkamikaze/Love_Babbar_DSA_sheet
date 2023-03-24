class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int maxi,mini;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<k)
            continue;
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            mini=min(arr[0]+k,arr[i]-k);
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};
