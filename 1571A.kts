fun read() = readLine()!!.split(" ").map { it.toInt() }
fun main(){
    var t=readLine()!!.toInt()
    while(t>0)
    {
        t=t-1
        var s=readLine()!!
        var n=s.length-1
        var a=0
        var b=0
        for(i in 0..n)
        {
            if(s[i]=='<') a++
            if(s[i]=='>') b++
        }
        if(a>0 && b>0)
        {
            print("?\n")
        }
        else if(a>0)
        {
            print("<\n")
        }
        else if(b>0)
        {
            print(">\n")
        }
        else
        {
            print("=\n")
        }
    }
}