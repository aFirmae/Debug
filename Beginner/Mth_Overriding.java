public class Mth_Overriding
{
    public static void main(String[] args)
    {
        A a = new A();
        B b = new B();
        a.show();
        b.show();
    }
}
class A
{
    void show()
    {
        System.out.println("Class A");
    }
}
class B extends A
{
    void show()
    {
        System.out.println("Class B");
    }
}
