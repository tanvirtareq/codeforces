fun read() = readLine()!!.split(" ").map { it.toLong() }
fun main() = repeat(readLine()!!.toInt()) {
    var (n, k) = read()
    var s=readLine().toString()
    var ct=0.toLong()
    for(i in s)
    {
        if(i=='1') ct=ct+1.toLong()
    }
    var pos=0.toLong()
    var cnt=0.toLong()
    while(ct>0)
    {
//        print(s+" \n")
        cnt=cnt+1.toLong()
//        s=s.substring(0, 2)
//        print(s)
        
        if(s[pos.toInt()]=='1') ct=ct-1.toLong()
        if(pos!=0.toLong())
        s=s.substring(0, pos.toInt())+s.substring(pos.toInt()+1, n.toInt())
       if(pos==0.toLong())
          s=s.substring(1, n.toInt())
        
        n=s.length.toLong()
        if(n==0.toLong()) break
        pos=(pos+k-1+n)%n
        
    }
    print(cnt)
    print('\n')
}