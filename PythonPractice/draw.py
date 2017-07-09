# -*- coding: utf-8 -*-
"""
Created on Fri Jul  7 10:28:45 2017

@author: ChingWei
"""
import turtle_wei as te
def draw(x,y):
    te.penup()
    te.goto(x,y)
    te.pendown()
    te.forward(200)
    direct(100)
    direct(200)
    direct(100)
def direct(x):
    te.left(90)
    te.forward(x)
def line(x1,y1,x2,y2):
    te.penup()
    te.goto(x1,y1)
    te.pendown()
    te.goto(x2,y2)
    
draw(0,0)
te.left(90)
draw(-50,-60)
line(200,100,150,40)
line(200,0,150,-60)
line(0,0,-50,-60)
line(0,100,-50,40)   
te.done()