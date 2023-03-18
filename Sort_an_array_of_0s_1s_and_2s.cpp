class Solution
{
    public:
    void sort012(int arr[], int n)
    {
    int a=0,b=0,c=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        a++;
        else if(arr[i]==1)
        b++;
        else
        c++;
    }
    
    for(int i=0;i<a;i++)
    {
        arr[i]=0;
    }
    
    for(int i=a;i<a+b;i++)
    {
        arr[i]=1;
    }
    
    for(int i=a+b;i<a+b+c;i++)
    {
        arr[i]=2;
    }
    
    }


    
};
