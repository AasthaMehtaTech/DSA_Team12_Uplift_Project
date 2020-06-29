    public void sort(int[] nums) {
        int l = 0;
        int i = 0;
        int r = nums.length-1;
        while(i<=r){
            if(nums[i]==2){ // if 2 is there, swap is with last and decrement the last operator as 2 needs to be in the last always
                // we do not know what is in the last hence we will swap so that it is confirmed that in last blue is present
                int temp = nums[i];
                nums[i] = nums[r];
                nums[r] = temp;
                r--;
            }
            else if(nums[i]==0){ // Swap with left thing. but temp will be left one thing this need to be remembered
                int temp = nums[l];
                nums[l] = nums[i];
                nums[i] = temp;
                i++;
                l++;
            }else{ //if i is red color and it is present there so just increment it 
                i++;
            }
        }
        
    }
