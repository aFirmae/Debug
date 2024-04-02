import java.util.Scanner;
import java.lang.Math;

public class Volume_Cons_Ovr
{
    public static void main(String[] args)
    {
        // Cube
        int side;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side of the cube: ");
        side = sc.nextInt();

        Func5 cube = new Func5(side);
        System.out.println("The volume of the cube is: " + cube.volume() + "\n\n");

        // Cuboid
        int length, breadth, height;
        System.out.print("Enter the length of the cuboid: ");
        length = sc.nextInt();
        System.out.print("Enter the breadth of the cuboid: ");
        breadth = sc.nextInt();
        System.out.print("Enter the height of the cuboid: ");
        height = sc.nextInt();

        Func5 cuboid = new Func5(length, breadth, height);
        System.out.println("The volume of the cuboid is: " + cuboid.volume() + "\n\n");


        // Cylinder
        int radius, cyl_height;
        System.out.print("Enter the radius of the cylinder: ");
        radius = sc.nextInt();
        System.out.print("Enter the height of the cylinder: ");
        cyl_height = sc.nextInt();

        Func5 cylinder = new Func5(radius, cyl_height);
        System.out.println("The volume of the cylinder is: " + Math.round(cylinder.volume() * 100.00) / 100.0);
    }
}

class Func5
{
    double length, breadth, height;
    Func5(int length, int breadth, int height)
    {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    Func5(int side)
    {
        length = breadth = height = side;
    }

    Func5(int radius, int height)
    {
        length = radius * radius;
        breadth = Math.PI;
        this.height = height;
    }

    double volume()
    {
        return (length * breadth * height);
    }
}
