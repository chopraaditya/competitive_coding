# cook your dish here
T=int(input())
c=0
while(T!=0):
    T=T-1
    N=int(input())
    S=input()
    cons=True
    vowel=False
    c=0
    
    vowelsList=['a','e','i','o','u']
    
    for x in range (0, N-1):
        if(S[x] in vowelsList):
            cons=False
        else:
            cons=True
        
        if(S[x+1] in vowelsList):
            vowel=True
        else:
            vowel=False
        
        res= cons and vowel
        if(res):
            c=c+1
    print(c)
            
            
            