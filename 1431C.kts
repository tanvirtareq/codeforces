

fun read() = readLine()!!.split(" ").map { it.toLong() }
fun main() = repeat(readLine()!!.toInt()) {
    var (n, k) = read()
    var v=read()
    val dp = mutableListOf<Long>()
    var j=0
    var last=0.toLong()
    for( i in v)
    {
        if(j.toLong()==n) break
        last=last+i
        dp.add(last)
        j=j+1
    }
    j=0
    var mn=0.toLong()
    var ase=n
    
    for(i in v)
    {
        if(j.toLong()==n) break
        var nibo1=ase/k
        var nibo=nibo1.toInt()
        if(nibo==0) continue
        if(j==0)
        {
            if(mn<dp[j+nibo-1]) mn=dp[j+nibo-1]
        }
        else
        {
            if(mn<dp[j+nibo-1]-dp[j-1]) mn=dp[j+nibo-1]-dp[j-1] 
        }
        j=j+1
        ase=ase-1
    }
    
    println(mn)
}