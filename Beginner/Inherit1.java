import java.util.*;
class Room1_Area
{
    int l, b;
    Room1_Area(int l, int b)
    {
        this.l = l;
        this.b = b;
    }
    void area()
    {
        System.out.println("Area of room1 is: " + l * b + " unit²");
    }
}
class Room1_Vol extends Room1_Area
{
    int h;
    Room1_Vol(int l, int b, int h)
    {
        super(l, b);
        this.h = h;
    }
    void volume()
    {
        System.out.println("Volume of room2 is: " + l * b * h + " unit³");
    }
}
public class Inherit1
{
    public static void main(String[] args)
    {
        int l, b, h;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length and breadth and height of Room1: ");
        l = sc.nextInt();
        b = sc.nextInt();
        h = sc.nextInt();

        Room1_Vol r1 = new Room1_Vol(l, b, h);
        r1.area();
        r1.volume();
    }
}
