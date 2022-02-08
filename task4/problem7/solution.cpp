void kaprekarNumbers(int n, int m) {  
    int w=0;
  
    for(long long i=n;i<=m;i++){
        long long y=i*i;
        string s= to_string(y);
        if(s.size()>1){
        long long d=(s.size()/2);
        string s1,s2;
        s1="";
        s2="";
        for(long long j=0;j<d;j++)
        {
            s1=s1+s[j];
        }
        for(long long j=d;j<s.size();j++)
        {
            s2=s2+s[j];

        }
        if(stoi(s1)+stoi(s2)==i){
            cout<<i<<" ";
            w++;
            }
        }
        else
        {
            if(i==1) {cout<<i<<" "; w++;};

        }
            

    }
    if(w==0)
        cout<<"INVALID RANGE";
}
