fun read() = readLine()!!.split(" ").map { it.toLong() }
fun main() = repeat(readLine()!!.toInt()) {
    var (n, k) = read()
    var mx=0.toLong()
    for(i in 1..n)
    {
        var (l, r) =read()
        if(l>k) continue
        l=maxOf(l, k)
        mx=maxOf(mx, r-l+1)
    }
    print(mx)
    print('\n')
}