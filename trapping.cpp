int trappingWater(int arr[], int n){

    // Your code here
    int sum=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
        {
            if(arr[j]>lmax)
            lmax=arr[j];
        }

        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>rmax)
            rmax=arr[j];
        }
        int cap;
        if(rmax>lmax)
        cap=lmax-arr[i];
        else cap=rmax-arr[i];
        if(cap>0)
        sum=sum+cap;

    }
    return sum;

}






int trappingWater(int arr[], int n)
{
    int sum=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        if(lmax[i-1]<arr[i])
        lmax[i]=arr[i];
        else
        lmax[i]=lmax[i-1];
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>rmax[i+1])
        rmax[i]=arr[i];
        else
        rmax[i]=rmax[i+1];
    }
    for(int i=1;i<n;i++)
    {
        if(lmax[i]<rmax[i])
        sum=sum+lmax[i]-arr[i];
        else
        sum=sum+rmax[i]-arr[i];
    }
    return sum;

}
