class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if(timeSeries.empty())
        	return 0;
        int result = 0;
        for(int i = 0; i < n-1; i++){
        	if(timeSeries[i+1] - timeSeries[i] >= duration)
        		result += duration;
        	else
        		result += timeSeries[i+1] - timeSeries[i];
        }
        return result + duration;
    }
};