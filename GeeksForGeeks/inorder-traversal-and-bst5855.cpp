/*class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        for(int i=0;i<N;i++){
            if(arr[i]<arr[i-1]){
                return 0;
            }
        }
        return 1;
    }
};
Time Complexity (TC): O(N)
Space Complexity (SC): O(1)
*/