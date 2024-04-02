public class Inh_multiple 
{
    public static void main(String[] args) 
    {
        D1 obj = new D1();
        obj.display();
        obj.show();
    }
}
class D1 implements A1, B1
{
    public void display()
    {
        System.out.println("Display method of interface A");
    }
    public void show()
    {
        System.out.println("Show method of interface B");
    }
}
interface A1
{
    void display();
}
interface B1
{
    void show();
}