class Solution {


    vector<int> generateMaxArray(vector<int> &arr, int k){
        int n = arr.size();
        vector<int> result;
        deque<int> dq;
        int i = 0;

        while(i < k){
            if(dq.empty()){
                dq.push_back(i);
                i++;
            }
            else if(arr[dq.back()] >= arr[i]){
                dq.push_back(i);
                i++;
            }
            else{
                dq.pop_back();
            }
        }
        result.push_back(dq.front());
        int j = 0;
        while(i < n){
            while(!dq.empty() && arr[dq.back()] < arr[i]) dq.pop_back();
            dq.push_back(i);
            i++;
            j++;
            while(!dq.empty() && dq.front() < j) dq.pop_front();
            result.push_back(dq.front());
        }   
        return result;
    }
    bool isPossible(vector<int> &maxArray, vector<int> &arr, int m, int k, int mid){
        // vector<int> pd;
        // pd.push_back(-1);
        int t = 0;
        for(int i = 0; i < maxArray.size(); i++){
            if(arr[maxArray[i]] <= mid){
                // pd.push_back(i);
                i += (k-1);
                t++;
            }
        }
        
        // cout <<mid <<" " << t << endl;

        return t >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        vector<int> maxArray = generateMaxArray(bloomDay, k);
        // for(auto el : maxArray) cout << el << " ";
        int lo = 1, hi = 1e9;
        int res = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            if(isPossible(maxArray, bloomDay, m, k, mid)){
                res = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }

        return res;
    }
};
