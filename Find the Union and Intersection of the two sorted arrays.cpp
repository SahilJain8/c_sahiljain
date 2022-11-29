#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
  unordered_set<int> s;
   for(int i=0;i<n;i++) s.insert(arr1[i]);
   for(int i=0;i<m;i++) s.insert(arr2[i]);
    
   return make_pair(m+n-s.size(),s.size());
    
    
    }
