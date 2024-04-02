public class MthO2
{
    public static void main(String[] args)
    {
        // Aaa a = new Aaa();
        Bbb b = new Bbb();
        // a.show();
        b.show();
    }
}
abstract class Aaa
{
    abstract void show();
}
class Bbb extends Aaa
{
    void show()
    {
        System.out.println("Class B");
    }
}

