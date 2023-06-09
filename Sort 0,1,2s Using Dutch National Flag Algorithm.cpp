class Solution {
public:
    void sortColors(vector<int>& nums) {
      //Brute Force TC=(nlogn) SC=o(n)
    //     //bubble sprt
    //  int i, j;
    //  int n=nums.size();
    // bool swapped;
    // for (i = 0; i < n - 1; i++) {
    //     swapped = false;
    //     for (j = 0; j < n - i - 1; j++) {
    //         if (nums[j] > nums[j + 1]) {
    //             swap(nums[j], nums[j + 1]);
    //             swapped = true;
    //         }
    //     }
 
    //     // If no two elements were swapped
    //     // by inner loop, then break
    //     if (swapped == false)
    //         break;
    // }

      
//  Better Approach using TC=O(2N) SC=(1)
//      void sortArray(vector<int>& arr, int n) {

//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) cnt0++;
//         else if (arr[i] == 1) cnt1++;
//         else cnt2++;
//     }

//     //Replace the places in the original array:
//     for (int i = 0; i < cnt0; i++) arr[i] = 0; // replacing 0's

//     for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; // replacing 1's

//     for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; // replacing 2's

// }
     
    int n=nums.size(); //optimal approach using algorithm  TC=O(n) sc=O(1)
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h){
    if(nums[m]==0)
    {
        swap(nums[l],nums[m]);
        l++;
        m++;
    }
    else if(nums[m]==1)
              m++;
    
   else if(nums[m]==2){
        swap(nums[m],nums[h]);
        h--;
    }
    }
    }
};
