import java.util.*;
class Details
{
    String name;
    int roll;
    Details(String name, int roll)
    {
        this.name = name;
        this.roll = roll;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Roll: " + roll);
    }
}
public class Students
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int n = sc.nextInt();

        Details[] students = new Details[n];

        String name;
        int roll;

        for(int i = 0;i < n;i++)
        {
            students[i] = new Details("", 0);
            System.out.print("Enter the name of student " + (i+1) + ": ");
            name = sc.nextLine();
            name = sc.nextLine(); // To avoid the problem of nextInt() and nextLine() together

            System.out.print("Enter the roll of student " + (i+1) + ": ");
            roll = sc.nextInt();
            students[i] = new Details(name, roll);
        }
        for(int i = 0;i < n;i++)
        {
            students[i].display();
        }
    }
}


/*
        for(int i = 0;i < n;i++)
        {
            students[i] = new Details("", 0);
            System.out.print("Enter the name of student " + (i+1) + ": ");
            students[i].name = sc.next();
            System.out.print("Enter the roll of student " + (i+1) + ": ");
            students[i].roll = sc.nextInt();
        }
 */
