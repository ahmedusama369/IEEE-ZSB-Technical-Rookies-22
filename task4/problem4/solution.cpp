int libraryFine(int d2, int m2, int y2, int d1, int m1, int y1) {
  
    int fee;
    if((y2<y1) || (y2==y1 && m2<m1) || (y2==y1 && m2==m1 && d2<d1))
        fee=0;
    else if(y2>y1)
        fee=10000;
    else if(y2==y1 && m1<m2)
    {
        int r=m2-m1;
        fee=500*r;
    }
    else if(y1==y2 && m1==m2)
    {
        if(d2>d1)
        {
            int r=d2-d1;
            fee=15*r;
        }
    }
    return fee;

}
