class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int max=INT_MIN,min=INT_MAX;
    	for(int i=0;i<N;i++)
    	{
    	    if(A[i]>max)
    	    max=A[i];
    	}
    	for(int i=0;i<N;i++)
    	{
    	    if(A[i]<min)
    	    min=A[i];
    	}
    	return max+min;
    }

};
