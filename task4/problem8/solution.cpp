vector<int> stones(int n, int a, int b) {
    vector<int> v;
    int m=n-1;
    v.push_back(a*m);
    if((a*m)!=(b*m))
        v.push_back(b*m);
    for(int i=1;i<m;i++)
    {
        int j=m-i;
        int s=(a*i)+(b*j);
        if(s!=v[0])
            v.push_back(s);
    }
    sort(v.begin(),v.end());
    return v;

}
