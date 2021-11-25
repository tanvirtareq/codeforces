t=int(input())
pat="abacaba"
for _ in range(t):
    n=int(input())
    s=str(input())
    f=0
    for i in range(n-6):
        flg=0
        for j in range(7):
            flg=1 if s[i+j]!=pat[j] and s[i+j]!='?' else flg
        if flg==1:
            continue
        ss="".join(s[:i]+pat+ s[i+7:])
        # print(ss)
        if sum([1 if ss[i:i+7]==pat else 0 for i in range(n-6)])==1:
            ss=ss.replace('?', 'z')
            f=1
            print("yes\n"+ss)
            break
    if f==0:
        print("no")