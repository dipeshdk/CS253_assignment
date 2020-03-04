# CS253 Assignment
Object Oriented Programming assignment of course CS253(Software Development and Operations)

The file structure is as follows:
1) Use makefile to create the executable called 'geometry'
2) Run the executable to get the desired output
3) The driver code is in geometry.cpp
4) For each class the function declaration and the class declaration is made in <className>.h file and the function definitions are given in <className>.cpp.
 
The structure of the code is as follows:

Variable 't' is used to refer to the said region in this document

Definig a shape:
1) Triangle has been defined as 3 points and the constructor checks whether the points form a triangle. If they don't form a triangle then program terminates.
    a)a
    b)b
    c)c

2) Rectangle has been defined as 4 points and the constructor checks whether the points form a rectangle. If they don't form a rectangle then program terminates. 
    a)t.leftbottom
    b)t.lefttop
    c)t.righttop
    d)t.rightbottom

3) Square has been defined as 4 points and the constructor checks whether the points form a square. If they don't form a square then program terminates. 
    a)t.leftbottom
    b)t.lefttop
    c)t.righttop
    d)t.rightbottom

4) Circle has been defined with center point and radius and the constructor checks whether the given things form a valid circle. If they don't form a circle then program terminates.
    a)t.center
    b)t.radius

5) Complement of a circle has been defined through a center point and radius of the circle
    a)t.center
    b)t.radius

6) Annulus has been defined through center point and small radius(r) and large radius(R)
    a)t.center
    b)t.r
    b)t.R


7) LShape has been defined through constructor with leftBottom point and the lengths a,b,c as given in the question as the arguments
    a)t(leftBottom,a,b,c)

NOTE: TRANSLATING OR ROTATING ANY REGION MOVES THE ORIGINAL REGION 

Translating a region:
To move any region specify the x and y amount by which to move the region in the form of Point shift(x,y).

Rotating region:
To move the region specify the angle in radians by which to rotate the region in anticlockwise direction.

Checker Function:

1) Triangle 
    a) 2 points are checked for the original triangle
    b) The triangle is translated by a given amount
    c) 2 points are checked for the translated triangle
    d) The triangle is translated back to the original position for easy checking of rotation case.(can be removed)
    e) The triangle is rotated(after being translated to the original position) by a given amount
    f) 2 points are checked for the rotated triangle

2) Rectangle 
    a) 2 points are checked for the original rectangle
    b) The rectangle is translated by a given amount
    c) 2 points are checked for the translated rectangle
    d) The rectangle is translated back to the original position for easy checking of rotation case(can be removed)
    e) The rectangle is rotated(after being translated to the original position) by a given amount
    f) 2 points are checked for the rotated rectangle

3) Square 
    a) 2 points are checked for the original square
    b) The square is translated by a given amount
    c) 2 points are checked for the translated square
    d) The square is translated back to the original position for easy checking of rotation case(can be removed)
    e) The square is rotated(after being translated to the original position) by a given amount
    f) 2 points are checked for the rotated square

4) Circle 
    a) 2 points are checked for the original circle
    b) The circle is translated by a given amount
    c) 2 points are checked for the translated circle
    d) The circle is rotated(after being translated) by a given amount
    e) 2 points are checked for the rotated circle

5) Complement of a circle 
    a) 2 points are checked for the original complement
    b) The complement is translated by a given amount
    c) 2 points are checked for the translated complement
    d) The complement is rotated(after being translated) by a given amount
    e) 2 points are checked for the rotated complement

6) Annulus 
    a) 2 points are checked for the original annulus
    b) The annulus is translated by a given amount
    c) 2 points are checked for the translated annulus
    d) The annulus is rotated(after being translated) by a given amount
    e) 2 points are checked for the rotated annulus

7) LShape 
    a) 2 points are checked for the original LShape
    b) The LShape is translated by a given amount
    c) 2 points are checked for the translated LShape
    d) The LShape is translated back to the original position for easy checking of rotation case(can be removed)
    e) The LShape is rotated(after being translated to the original position) by a given amount
    f) 2 points are checked for the rotated LShape