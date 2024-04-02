public class CmdLineInput
{
    int a, b;
    public static void main(String[] args)
    {
        CmdLineInput obj = new CmdLineInput();
        obj.a = Integer.parseInt(args[0]);
        obj.b = Integer.parseInt(args[1]);
        System.out.println("Sum = " + (obj.a + obj.b));
    }
}