# -*- coding: utf-8 -*-
'''
Gaussian Elimination

author: Chan Ching-Wei
start time:2017/6/29 20:40

'''

#from numpy import array
m,n=input().split(' ') # input an  m x n matrix A
Matrix=[input().split(' ') for x in range(int(m))]  # initialization
for i in range(0,m):
    for j in range(0,n):
        
        