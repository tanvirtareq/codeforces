fun read() = readLine()!!.split(" ").map { it.toLong() }
fun main() = repeat(readLine()!!.toInt()) {
    var n=readLine()!!.toInt()
    var v=read()
    var f=0
    for( i in 1..n-1)
    {
        var x=v[i]-v[i-1]
        if(x%2==0.toLong() && x>1.toLong())
        {
            f=1
            break;
        }
    }
    if(f==1)
        print("YES")
    else if(f==0) print("NO")
    print('\n')
}