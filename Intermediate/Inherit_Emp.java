public class Inherit_Emp
{
    public static void main(String[] args) {
        FullTimeEmployee fte = new FullTimeEmployee();
        PartTimeEmployee pte = new PartTimeEmployee();

        fte.name = "Sherlock Holmes";
        fte.gender = "Male";
        fte.address = "221B Baker Street, London";
        fte.age = 40;
        fte.designation = "Detective";
        fte.salary = 40000;

        pte.name = "John Watson";
        pte.gender = "Male";
        pte.address = "221B Baker Street, London";
        pte.age = 38;
        pte.workingHours = 8;
        pte.rate = 200;

        System.out.println("Full Time Employee Details - ");
        fte.display();

        System.out.println("\nPart Time Employee Details - ");
        pte.display();
    }
}
class Employee
{
    String name, gender, address;
    int age;

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Gender: " + gender);
        System.out.println("Address: " + address);
        System.out.println("Age: " + age);
    }
}
class FullTimeEmployee extends Employee
{
    String designation;
    float salary;
    void display() {
        super.display();
        System.out.println("Designation: " + designation);
        System.out.println("Salary: " + salary);
    }
}
class PartTimeEmployee extends Employee
{
    int workingHours;
    float rate;
    void display() {
        super.display();
        System.out.println("Working Hours: " + workingHours);
        System.out.println("Rate: " + rate);
    }
}
