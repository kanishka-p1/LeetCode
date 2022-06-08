int minCount(int n)
{
	//Write your code here
    if( sqrt(n) - floor(sqrt(n)) == 0) {   
	        return 1;
	    }
	if(n <= 3) {  
	        return n;
	}
    int minimum = INT_MAX;
    for(int i = 0; i * i < n; i++) {
        int ans = minCount(n - i * i);
        minimum = min(minimum, ans);
    }
    return minimum + 1; 
}
