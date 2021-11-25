

fun read() = readLine()!!.split(" ").map { it.toLong() }
fun main() = repeat(readLine()!!.toInt()) {
    var n=read()
    var v=read()
    var vs=v.sorted()
    var vr=vs.reversed()
    var x=0.toLong()
    var mn=0.toLong()
    for(i in vr)
    {
        x=x+1
        if(mn<i*x) mn=i*x
    }
    println(mn)
}