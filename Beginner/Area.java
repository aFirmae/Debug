import java.util.Scanner;
class Rectangle
{
    int length, breadth;
    void getdata(int length, int breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }
    void area()
    {
        System.out.println("Area of rectangle: " + length * breadth);
    }
}

public class Area
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length and breadth of 1st Rectangle: ");
        int length1 = sc.nextInt();
        int breadth1 = sc.nextInt();

        System.out.print("Enter lenghth and breadth of 2nd Rectangle: ");
        int length2 = sc.nextInt();
        int breadth2 = sc.nextInt();

        //Creating objects of Rectangle class
        Rectangle r1 = new Rectangle();
        Rectangle r2 = new Rectangle();

        //Using getdata() method
        r1.getdata(length1, breadth1);
        r1.area();

        //Using direct assignment
        r2.length = length2;
        r2.breadth = breadth2;
        r2.area();
    }
}