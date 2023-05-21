class Solution
{
  public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {   
        vector<int>vec;
        int maxi;
        for(int i=0;i<n-k+1;i++){
        
        if(i!=0){
        if(maxi==arr[i-1] && arr[i+k-1]>maxi){
        vec.push_back(arr[i+k-1]);
        maxi=arr[i+k-1];
        continue;
        }
        else if(maxi!=arr[i-1] && arr[i+k-1]<maxi){
        vec.push_back(maxi);
        continue;
        }
        }
        
        maxi=INT_MIN;
        for(int j=i;j<i+k ;j++)
        maxi=max(maxi,arr[j]);
        vec.push_back(maxi);
        }
         return vec;
    }
};
