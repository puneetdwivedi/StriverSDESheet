int missingNumber(int A[], int N)
{
    long long int currSum = 0;
    for(int i = 0; i< N-1; i++){
        currSum += A[i];
    }
    
    long long int totalSum = (N*(N+1))/2;
    
    return totalSum - currSum;
}