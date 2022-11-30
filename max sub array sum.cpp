#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
 long m=0;
 long s=0;
    
 
    for(int i=0;i<n;i++){
      
        s+=arr[i];
        if(s<0) s=0;
        m=max(m,s);
        
    }
     if(s==0 && m<0) m=0;
   return m;
    

}
