# -*- coding: utf-8 -*-
"""
Created on Thu Jul  6 19:06:27 2017

@author: ChingWei
"""

import turtle_wei as turtle
def draw(color,x,y):
    turtle.pensize(10)
    turtle.color("%s" % color,"blue")
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
    turtle.circle(45)


draw("blue",-110,-25)
draw("black",0,-25)
draw("red",110,-25)
draw("yellow",-55,-75)
draw("green",55,-75)

turtle.done()


"""
import turtle_wei as turtle
def draw(color,x,y):
    turtle.pensize(10)
    turtle.color("%s" % color,"blue")
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
    turtle.circle(44)

draw("black",-110,-25)
draw("black",0,-25)
turtle.penup()
turtle.goto(-70,25)
turtle.pendown()
turtle.left(90)
turtle.forward(200)
turtle.right(90)
turtle.penup()
turtle.goto(-50,220)
turtle.pendown()
turtle.circle(22)
turtle.penup()
turtle.goto(-25,220)
turtle.pendown()
turtle.right(90)
turtle.forward(200)


turtle.done()
"""
"""
from turtle_wei import *
color('red', 'yellow')
begin_fill()
while True:
    forward(200)
    right(170)
   
    if abs(pos()) < 1:
        break
end_fill()
done()
"""