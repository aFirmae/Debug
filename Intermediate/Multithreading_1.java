public class Multithreading_1
{
    public static void main(String[] args)
    {
        new Thread1().start();
        new ThreadB().start();
        new ThreadC().start();
    }
}
class Thread1 extends Thread
{
    @Override
    public void run()
    {
        for (int i = 1; i < 4; i++)
        {
            System.out.println("From Thread A: " + i);
        }
        System.out.println("Exit from Thread A");
    }
}
class Thread2 extends Thread
{
    @Override
    public void run()
    {
        for (int i = 1; i < 4; i++)
        {
            System.out.println("From Thread B: " + i);
        }
        System.out.println("Exit from Thread B");
    }
}
class Thread3 extends Thread
{
    @Override
    public void run()
    {
        for (int i = 1; i < 4; i++)
        {
            System.out.println("From Thread C: " + i);
        }
        System.out.println("Exit from Thread C");
    }
}
