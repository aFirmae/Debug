import java.lang.*;
public class MultiThreading_2
{
    public static void main(String[] args)
    {
        ThreadA t1 = new ThreadA();
        ThreadB t2 = new ThreadB();
        ThreadC t3 = new ThreadC();
        t1.start();
        t2.start();
        t3.start();
    }
}
class ThreadA extends Thread
{
    public void run()
    {
        for(int i = 1; i < 5; i++)
        {
            if(i == 1) Thread.yield();
            System.out.println("ThreadA: " + i); // 4
        }
        System.out.println("Exit from ThreadA"); // 1
    }
}
class ThreadB extends Thread
{
    public void run()
    {
        for(int i = 1; i < 5; i++)
        {
            try
            {
                if (i == 4) stop();
            }
            catch(Exception e)
            {
                System.out.println("Thread couldn't be stopped!");  // 1
            }
            System.out.println("ThreadB: " + i); // 3
        }
        System.out.println("Exit from ThreadB"); // 0
    }
}
class ThreadC extends Thread
{
    public void run()
    {
        for(int i = 1; i < 5; i++)
        {
            if(i == 1)
            {
                try
                {
                    Thread.sleep(10);
                }
                catch(Exception e)
                {
                    System.out.println("Thread wasn't slowed!");  // 1
                }
            }
            System.out.println("ThreadC: " + i); // 4
        }
        System.out.println("Exit from ThreadC"); // 1
    }
}
