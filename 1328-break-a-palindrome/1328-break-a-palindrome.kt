class Solution {
    fun breakPalindrome(p: String): String {
        if (p.length == 1)
            return ""
        val q = p.toCharArray()
        for (i in p.indices)
        {
            if (q[i] != 'a'){
                q[i] = 'a'
                println(q)
                val v = q.joinToString ( "" )
                println(v)
                if (q.reversed().joinToString("") != q.joinToString(""))
                    return q.joinToString("")
            }
        }
        val x = p.toCharArray()
        x[p.length-1] = 'b'
        return x.joinToString("")
    }
}