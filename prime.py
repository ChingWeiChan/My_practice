# -*- coding: utf-8 -*-
"""
Created on Fri Apr 14 16:29:19 2017

@author: ChingWei
"""
total=0
max=input("Please input the Maxium:")
for i in range(2,int(max)):
    for j in range(2,i):
        if(i%j==0):
          tmp=1 
          break
    else:
        total+=1
        print(i)
print('Total:'+str(total))     
    
