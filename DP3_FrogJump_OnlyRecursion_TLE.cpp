void callingFunc(vector<int>& height, int n, int i, int& sum, int& ans){
    if(i==n-1){
        ans = min(ans, sum);
        return;
    }
    if(i>n-1){
        return;
    }
    
    if(i<n-2){
      int temp = sum + abs( height[i] - height[i+2] );
      callingFunc(height, n, i+2, temp , ans);	
    }
    
    if(i<n-1){
      int temp = sum + abs( height[i] - height[i+1] );
      callingFunc(height, n, i+1, temp , ans);	
    }
}

int minimumEnergy(vector<int>& height, int n) {
    int ans = INT_MAX;
    int sum = 0;
    callingFunc(height,n, 0, sum, ans);
    return ans;
}
