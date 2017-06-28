# -*- coding: utf-8 -*
'''
a121

time: 2017/06/26
'''
def prime_find(maxnum):
    total=0
    prime[total]=2
    for i in range(3,maxnum):
        for j in range(3,i)
        if i%prime[total]==0:break
while True:
    try:
        a,b=input().split(' ')
        num=0
        for i in range(int(a),int(b)+1):
            j=2
            while j*j<=i:
                if i%j==0:break
                j+=1
            else:num+=1
        print(num)
    except:
        break