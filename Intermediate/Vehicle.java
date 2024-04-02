class Motor_Vehicle
{
    String modelName, modelNumber;
    double modelPrice;
    Motor_Vehicle(String a, String b, double c)
    {
        modelName = a;
        modelNumber = b;
        modelPrice = c;
    }

    void display()
    {
        System.out.println("Model Name: " + modelName);
        System.out.println("Model Number: " + modelNumber);
        System.out.println("Model Price: " + modelPrice);
    }

}
class Car extends Motor_Vehicle
{
    double discountRate, discountedPrice = modelPrice, discount = 0;
    Car(String a, String b, double c, double d)
    {
        super(a, b, c);
        discountRate = d;
    }
    void discount()
    {
        discount = modelPrice * discountRate / 100;
        discountedPrice = modelPrice - discount;
    }
    void display()
    {
        super.display();
        System.out.println("Discount Rate: " + discountRate);
        System.out.println("Discounted Price: " + discountedPrice);
    }
}
public class Vehicle
{
    public static void main(String[] args)
    {
        Car c = new Car("Audi", "A8", 10000000, 10);
        c.discount();
        c.display();
    }
}
