class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxcomp=INT_MIN, sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(maxcomp<sum)
            maxcomp=sum;
            if(sum<0)
            sum=0;
        }
        return maxcomp;
        
        // Your code here
        
    }
};
