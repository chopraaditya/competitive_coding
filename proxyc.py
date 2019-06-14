# cook your dish here
t=int(input())

def perc():
    c=0
    # print(s)
    # print(len(s))
    # print("D value",d)
    for j in range(0,len(s)):
        if(s[j]=='P'):
            c=c+1
    per=(c*100)/len(s)
    # print("PERC FUNCTION KA VALUE:", per)
    return per
               

while(t!=0):
    t=t-1
    count=0
    d=int(input())
    s=input()
    
    
    for i in range(2,len(s)-2):
        ans=perc()
        # print("FOR LOOP MEIN PERC",ans)
        if(ans>=75):
            break
        if((s[i-2]=='P' or s[i-1]=='P') and (s[i+1]=='P' or s[i+2]=='P')):
            if(s[i]=='A'):
                
                s[i]='P'
                count=count+1
    ans=perc()
    
    if(ans<75):    
        print(-1)
    else:
        print(count)

 