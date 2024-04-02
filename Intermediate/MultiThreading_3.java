public class MultiThreading_3
{
    public static void main(String[] args)
    {
        α a = new α();
        a.setPriority(Thread.MIN_PRIORITY + 7);
        β b = new β();
        b.setPriority(a.getPriority() - 4);
        γ c = new γ();
        c.setPriority(a.getPriority() + 1);

        a.start();
        b.start();
        c.start();

        System.out.println("Threadα priority: " + a.getPriority());
        System.out.println("Threadβ priority: " + b.getPriority());
        System.out.println("Threadγ priority: " + c.getPriority());
    }
}
class α extends Thread
{
    public void run()
    {
        for(int i = 1; i < 5; i++)
        {
            System.out.println("Threadα: " + i);
        }
        System.out.println("Exit from Threadα");
    }
}
class β extends Thread
{
    public void run()
    {
        for(int i = 1; i < 5; i++)
        {
            System.out.println("Threadβ: " + i);
        }
        System.out.println("Exit from Threadβ");
    }
}
class γ extends Thread
{
    public void run()
    {
        for(int i = 1; i < 5; i++)
        {
            System.out.println("Threadγ: " + i);
        }
        System.out.println("Exit from Threadγ");
    }
}
