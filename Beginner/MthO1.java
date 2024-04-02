public class MthO1
{
    public static void main(String[] args)
    {
        Aa a = new Aa();
        Bb b = new Bb();
        a.show();
        b.show();
    }
}
class Aa
{
    final void show()
    {
        System.out.println("Class A");
    }
}
class Bb extends Aa
{
    /*
    void show()
    {
        System.out.println("Class B");
    }
     */
}

