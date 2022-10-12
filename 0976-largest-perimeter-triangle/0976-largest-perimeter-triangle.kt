class Solution {
        fun largestPerimeter(nums: IntArray): Int {
            val num = nums.sortedArrayDescending()
            var sum = 0
            
            for(i in 0..num.size-3)
            if (num[i]+num[i+1]<= num[i+2] || num[i]+num[i+2]<= num[i+1] || num[i+1]+num[i+2]<= num[i])
                continue
            else {
                if(num[i]+num[i+1]+num[i+2]>sum) sum = num[i]+num[i+1]+num[i+2]
            }
            return sum
        }
    }