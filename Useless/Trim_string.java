public class Trim_string 
{
    public static void main(String[] args) 
    {
        String s = "  Hello World  "; 
        int i = 0, j = s.length() - 1;

        for (i = 0; i < s.length(); i++) 
        {
            if (s.charAt(i) != ' ') break;
        }

        for (j = s.length() - 1; j >= 0; j--) 
        {
            if (s.charAt(j) != ' ') break;
        }

        System.out.print("Trimmed String: ");
        for  (int k = i; k <= j; k++) 
        {
            System.out.print(s.charAt(k));
        }
        System.out.println();
    }
}
