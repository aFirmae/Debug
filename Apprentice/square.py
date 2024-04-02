import turtle

# create a turtle object
t = turtle.Turtle()

# set the turtle's pen size and color
t.pensize(3)
t.pencolor('black')

# draw a square with a border
for i in range(2):
    t.forward(100)
    t.left(90)

# fill the square with a color
t.fillcolor('red')
t.begin_fill()
for i in range(4):
    t.forward(100)
    t.left(90)
t.end_fill()

# close the turtle window
turtle.done()
