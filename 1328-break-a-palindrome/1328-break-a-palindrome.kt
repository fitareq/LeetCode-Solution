class Solution {
        fun breakPalindrome(p: String): String {
            val n = p.length
            if (n<2) return ""
            val sb = StringBuilder(p)
            for(i in 0 until n/2){
                if(sb[i] != 'a')
                {
                    sb[i]= 'a'
                    return sb.toString()
                }
            }
            sb[n-1] = 'b'

            return sb.toString()
        }
    }