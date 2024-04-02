import java.util.Scanner;
import java.lang.Math;

public class Volume_Meth_Ovr
{
    public static void main(String[] args)
    {
        // Cube
        int side;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side of the cube: ");
        side = sc.nextInt();

        System.out.println("The volume of the cube is: " + Func6.volume(side) + "\n\n");

        // Cuboid
        int length, breadth, height;
        System.out.print("Enter the length of the cuboid: ");
        length = sc.nextInt();
        System.out.print("Enter the breadth of the cuboid: ");
        breadth = sc.nextInt();
        System.out.print("Enter the height of the cuboid: ");
        height = sc.nextInt();

        System.out.println("The volume of the cuboid is: " + Func6.volume(length, breadth, height) + "\n\n");

        // Cylinder
        int radius, cyl_height;
        System.out.print("Enter the radius of the cylinder: ");
        radius = sc.nextInt();
        System.out.print("Enter the height of the cylinder: ");
        cyl_height = sc.nextInt();

        System.out.println("The volume of the cylinder is: " + Math.round(Func6.volume(radius, cyl_height) * 100.00) / 100.0);
    }
}

class Func6
{
    static double volume(int length, int breadth, int height)
    {
        return length * breadth * height;
    }

    static double volume(int side)
    {
        return side * side * side;
    }

    static double volume(int radius, int height)
    {
        return radius * radius * Math.PI * height;
    }
}


