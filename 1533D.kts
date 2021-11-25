fun read() = readLine()!!.split(" ").map { it.toInt() }
fun main(){
    var (n, m)=read()
    var mp=mutableMapOf<String , Int > ()
    for(i in 1..n)
    {
        var x=readLine().toString()
        x=x.toString()
        if(mp[x]==null)
        {
            mp[x]=0
        }
        var y=mp[x]!!.toInt()
        y=y+1
        mp[x]=y
    }
    var q=readLine()!!.toInt()
    while(q>0)
    {
        q=q-1
        var mp1=mutableMapOf<String, Int> ()
        var x=readLine().toString()
        x=x.toString()
        var ct=0
        var s=x.substring(1, m+1)
        if(mp1[s]==null && mp[s]!=null)
        {
            ct=ct+mp[s]!!.toInt()
        }
        mp1[s]=1
        for(i in 1..m)
        {
            var s=x.substring(0, i)+x.substring(i+1, m+1)
            s=s.toString()
            if(mp1[s]==null && mp[s]!=null)
            {
                ct=ct+mp[s]!!.toInt()
            }
            mp1[s]=1
        }
        s=x.substring(0, m)
        if(mp1[s]==null && mp[s]!=null)
        {
            ct=ct+mp[s]!!.toInt()
        }
        mp1[s]=1
        print(ct)
        print('\n')
    }
}