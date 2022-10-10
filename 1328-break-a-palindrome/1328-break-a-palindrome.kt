class Solution {
        fun breakPalindrome(p: String): String {
            val n = p.length
            if (n<2) return ""
            val sb = p.toCharArray()
            for(i in 0 until n/2){
                if(sb[i] != 'a')
                {
                    sb[i]= 'a'
                    
                    return String(sb)
                }
            }
            sb[n-1] = 'b'

            return String(sb)
        }
    }