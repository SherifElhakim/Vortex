#Sherif's part
from abc import ABC,abstractmethod
from tkinter import E
import turtle as t
import numpy as np
import math
from math import *
from time import sleep as s
class Polygon(ABC):
    @abstractmethod
    def draw(self):
        pass
    @abstractmethod
    def area(self):
        pass
    @abstractmethod
    def perimeter(self):
        pass
#Aya's part
class Triangle(Polygon):
    def __init__(self,edge):
        self.__edge=edge
    def perimeter(self):
        return self.__edge*3
    def area(self):
        return ((self.__edge/(2*np.tan(np.radians(180/3))))*self.perimeter())/2
    def getEdge(self):
        return self.__edge
    def __add__(self, tri):
        return Triangle(self.__edge + tri.getEdge())
    def draw(self):
        for i in range(3):
            t.forward(self.__edge*10)
            t.right(int(360/3))
        s(5)
#Sherif's part
class EqTriangle(Polygon):
    def __init__(self,side):
        self.__side=side
    def draw(self):
        t.forward(self.__side*50)
        t.left(120)
        t.forward(self.__side*50)
        t.left(120)
        t.forward(self.__side*50)
        s(15)
    def area(self):
        return(((self.__side)/2*math.tan(np.radians(180/3)))*self.perimeter())/2
    def perimeter(self):
        return(self.__base*3)
class IsoTriangle(Polygon):
    def __init__(self,base,height):
        self.__base=base
        self.__height=height
    def draw(self):
        self.__hypot=(math.sqrt(pow((1/2)*self.__base,2)+pow(self.__height,2)))
        self.__bottomangle = degrees(math.atan(( (self.__height) / ((self.__base)*1/2) )))
        self.__topangle = 180 - (self.__bottomangle*2)
        t.forward(self.__base * 30)
        t.left(180-self.__bottomangle)
        t.forward(self.__hypot * 30)
        t.left(180-self.__topangle)
        t.forward(self.__hypot * 30)
        t.left(180-self.__bottomangle)
        print(self.__height)
        print(self.__base)
        print(self.__topangle)
        print(self.__bottomangle)
        s(15)
    def area(self):
        return(((1/2)*self.__base*self.__height))
    def perimeter(self):
        return(self.__base+2*(math.sqrt(pow((1/2)*self.__base,2)+pow(self.__height,2))))
#Sherif's part
class Quadriletral(Polygon):
    def __init__(self,side):
        self.__side=side
    def draw(self):
        t.forward(self.__side*50)
        t.left(90)
        t.forward(self.__side*50)
        t.left(90)
        t.forward(self.__side*50)
        t.left(90)
        t.forward(self.__side*50)
        s(15)
    def area(self):
        return(((self.__side)/2*math.tan(np.radians(180/4)))*self.perimeter())/2
    def perimeter(self):
        return(self.__base*4)
#Aya's part
class Rect(Polygon):
    def __init__(self,width,height):
        self.__width=width
        self.__height=height
    def area(self):
        return self.__width*self.__height
    def perimeter(self):
        return 2*(self.__width+self.__height)
    def draw(self):
        for i in range(2):
            t.forward(self.__width*10)
            t.right(int(360/4))
            t.forward(self.__height*10)
            t.right(360/4)
        s(5)
#Sherif's part
class Pentagon(Polygon):
    def __init__(self,side):
        self.__side=side
    def draw(self):
        t.forward(self.__side*50)
        t.left(360/5)
        t.forward(self.__side*50)
        t.left(360/5)
        t.forward(self.__side*50)
        t.left(360/5)
        t.forward(self.__side*50)
        t.left(360/5)
        t.forward(self.__side*50)
        s(15)
    def area(self):
        return(((self.__side)/2*math.tan(np.radians(180/5)))*self.perimeter())/2
    def perimeter(self):
        return(self.__base*5)
class Hexagon(Polygon):
    def __init__(self,side):
        self.__side=side
    def draw(self):
        t.forward(self.__side*30)
        t.left(360/6)
        t.forward(self.__side*30)
        t.left(360/6)
        t.forward(self.__side*30)
        t.left(360/6)
        t.forward(self.__side*30)
        t.left(360/6)
        t.forward(self.__side*30)
        t.left(360/6)
        t.forward(self.__side*30)
        s(15)
    def area(self):
        return(((self.__side)/2*math.tan(np.radians(180/6)))*self.perimeter())/2
    def perimeter(self):
        return(self.__base*6)
#Sherif's part
class Octagon(Polygon):
    def __init__(self,side):
        self.__side=side
    def draw(self):
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        t.left(360/8)
        t.forward(self.__side*20)
        s(15)
    def area(self):
        return(((self.__side)/2*math.tan(np.radians(180/8)))*self.perimeter())/2
    def perimeter(self):
        return(self.__base*8)
tt = IsoTriangle(5,10)
tt.draw()
#Aya's part
ip = input("Please type a Polygon from:\n 1-Triangle\n 2-Quadrilateral\n 3-Rectangle\n 4-Pentagon\n 5-Hexagon\n 6-Octagon\n 7-Isoscelestriangle\n Please note that some attribute are needed to be given after choosing which shape and function needed to be applied, thank you\n ")
oper = input("Type a function to apply from:\n 1-Calculate area\n 2-Calculate permiter\n 3-Draw shape\n ")
if(ip.upper == ("Traingle" or 1)):
    edge_tri = int(input("please enter an edge for the rectangle "))
    triangle_Obj = Triangle(edge_tri)
    if(oper.upper == ("Area" or 1)):
        triangle_Obj.area()
    elif(oper.upper == ("Permiter" or 2)):
        triangle_Obj.perimeter()
    elif(oper.upper == ("Draw shape" or 3)):
        triangle_Obj.draw
if(oper.upper == "Quadrilateral" or 2):
    edge_quad = int(input("please enter an edge for the Quadrilateral "))
    Quadrilateral_Obj = Quadriletral(edge_quad)
    if(oper.upper == ("Area" or 1)):
        Quadrilateral_Obj.area
    elif(oper.upper == ("Permiter" or 2)):
        Quadrilateral_Obj.perimeter
    elif (oper.upper == ("Draw shape" or 3)):
        Quadrilateral_Obj.draw
if(oper.upper == ("Rectangle" or 3)):
    width_rect = int(input("please enter the wdith for the rectangle "))
    height_rect = int(input("please enter the height for the rectangle "))
    Rectangle_Obj = Rect(width_rect , height_rect)
    if(oper.upper == ("Area" or 1)):
        Rectangle_Obj.area()
    elif(oper.upper == ("Permiter" or 2)):
        Rectangle_Obj.perimeter()
    elif (oper.upper == ("Draw shape" or 3)):
        Rectangle_Obj.draw()
if(oper.upper == ("Pentagon" or 4)):
    edge_pentagon = int(input("please enter an edge for the pentagon "))
    Pentagon_Obj = Pentagon(edge_pentagon)
    if(oper.upper == ("Area" or 1)):
        Pentagon_Obj.area()
    elif(oper.upper == ("Permiter" or 2)):
        Pentagon_Obj.perimeter()
    elif(oper.upper == ("Draw shape" or 3)):
        Pentagon_Obj.draw
if(oper.upper == ("Hexagon" or 5)):
    edge_hexagon = int(input("please enter an edge for the pentagon "))
    Hexagon_Obj = Hexagon(edge_hexagon)
    if(oper.upper == ("Area" or 1)):
        Hexagon_Obj.area()
    elif(oper.upper == ("Permiter" or 2)):
        Hexagon_Obj.perimeter()
    elif(oper.upper == ("Draw shape" or 3)):
        Hexagon_Obj.draw()
if(oper.upper == ("Octagon" or 6)):
    edge_octagon  = int(input("please enter an ende for the octagon "))
    Octagon_Obj= Octagon(edge_octagon)
    if(oper.upper == ("Area" or 1)):
        Octagon_Obj.area()
    elif(oper.upper == ("Permiter" or 2)):
        Octagon_Obj.perimeter
    elif (oper.upper == ("Draw shape" or 3)):
        Octagon_Obj.draw
if(oper.upper == ("Isoscelestriangle" or 7)):
    base_isoscelestriangle = int(input("please enter the base for the isoscelestriangle: "))
    height_isoscelestriangle = int(input("please enter the height for the isoscelestriangle: "))
    IsoscelesTriangle_Obj = IsoTriangle(base_isoscelestriangle , height_isoscelestriangle)
    if(oper.upper == ("Area" or 1)):
        IsoscelesTriangle_Obj.area()
    elif(oper.upper == ("Permiter" or 2)):
        IsoscelesTriangle_Obj.perimeter()
    elif(oper.upper == ("Draw shape" or 3)):
        IsoscelesTriangle_Obj.draw()