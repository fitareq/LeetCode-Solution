 class Solution {
        fun increasingTriplet(nums: IntArray): Boolean {
            var first = Int.MAX_VALUE
            var sec = Int.MAX_VALUE
            for (i in nums)
            {
                if (i<=first) first = i
                else if (i<=sec) sec = i
                else return true
            }
            return false
        }
    }