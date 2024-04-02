import java.util.Scanner;
import java.lang.Math;
class Func4
{
    int length, breadth, height;
    Func4(int length, int breadth, int height)
    {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    double cube_volume()
    {
        return (Math.pow(length, 3));
    }

    double cuboid_volume()
    {
        return (length * breadth * height);
    }

    double cylinder_volume()
    {
        return (Math.PI * Math.pow(length, 2) * height);
    }

}

public class Volume_Cons
{
    public static void main(String[] args)
    {
        // Cube
        int side;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side of the cube: ");
        side = sc.nextInt();

        Func4 cube = new Func4(side, 0, 0);
        System.out.println("The volume of the cube is: " + cube.cube_volume());

        // Cuboid
        int length, breadth, height;
        System.out.print("Enter the length of the cuboid: ");
        length = sc.nextInt();
        System.out.print("Enter the breadth of the cuboid: ");
        breadth = sc.nextInt();
        System.out.print("Enter the height of the cuboid: ");
        height = sc.nextInt();

        Func4 cuboid = new Func4(length, breadth, height);
        System.out.println("The volume of the cuboid is: " + cuboid.cuboid_volume());


        // Cylinder
        int radius, cyl_height;
        System.out.print("Enter the radius of the cylinder: ");
        radius = sc.nextInt();
        System.out.print("Enter the height of the cylinder: ");
        cyl_height = sc.nextInt();

        Func4 cylinder = new Func4(radius, 0, cyl_height);
        System.out.println("The volume of the cylinder is: " + Math.round(cylinder.cylinder_volume() * 100.00) / 100.00);

    }
}
