# -*- coding: utf-8 -*-
'''
a149

time: 2017/6/26
'''
while True:
    try:
        time=input()
        for i in range(1,int(time)+1):
            number=input()
            sum=1
            for j in number:
                sum=sum*int(j)
            else: print(sum)
    except EOFError:
        break
    


