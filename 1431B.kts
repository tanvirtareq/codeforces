

fun read() = readLine()!!.split(" ").map { it.toLong() }
fun main() = repeat(readLine()!!.toInt()) {
    var s=readLine().toString()
    var ans=0.toLong()
    var ct=0.toLong()
    for(i in s)
    {
        if(i=='w')
        {
            ans=ans+1+ct/2
            ct=0
        }
        else
        {
            ct=ct+1
        }
    }
    ans=ans+ct/2
    println(ans)
}