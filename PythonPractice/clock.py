# -*- coding: utf-8 -*-
"""
Created on Fri Jul  7 18:34:51 2017

@author: ChingWei
"""

import turtle_wei as te
def goto(x,y):
    te.penup()
    te.goto(x,y)
    te.pendown()
    
    
te.circle(100)
goto(100,100)
te.write("3",align="right",font="20")
goto(0,180)
te.write("12",align="center",font="20")
goto(-96,100)
te.write("9",align="left",font="20")
goto(0,0)
te.write("6",align="left",font="20")
goto(0,-40)
te.write("15:00",align="center",font="20")
goto(0,100)
te.goto(50,100)
goto(0,100)
te.goto(0,170)
goto(0,100)
te.color("Gray")
te.goto(-50,100)

te.done()