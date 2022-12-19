// union

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       
       vector<int> result;
       int i = 0;
       int j = 0;
       
       while(i < n && j < m){
           if(arr1[i] < arr2[j]){
               if(result.empty() || result.back() != arr1[i]) result.push_back(arr1[i]);
               i++;
           }
           else{
             if(result.empty() || result.back() != arr2[j]) result.push_back(arr2[j]); 
             j++;
           }
       }
       
       while(i < n){
           if(result.empty() || result.back() != arr1[i]) result.push_back(arr1[i]);
           i++;
       }
       while(j < m){
           if(result.empty() || result.back() != arr2[j]) result.push_back(arr2[j]); 
             j++; 
       }
       
       return result;
    }
};

// intersection
class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        
        
        int n = arr1.size();
        int m = arr2.size();

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        vector<int> result;

        int i = 0; 
        int j = 0;
        while(i < n && j < m){
            if(arr1[i] == arr2[j]){
                if(result.empty() || arr1[i] != result.back()) result.push_back(arr1[i]);
                i++; j++;
            }
            else if(arr1[i] < arr2[j]) i++;
            else j++;
        }

        return result;
    }
};