int getMoneySpent(vector<int> arr1, vector<int> arr2, int b) {
    long long s=-1;
    for(long long i=0;i<arr1.size();i++)
    {
        for(long long  j=0;j<arr2.size();j++)
        {
            long long sum=arr1[i]+arr2[j];
            if(sum<=b && sum>s)
                s=sum;
        }
    }
    return s;

}
