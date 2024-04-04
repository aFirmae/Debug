public class Trim_string 
{
    public static void main(String[] args) 
    {
        boolean first_ltr = false;
        String s = "     Hello      World      and   Good     Morning      "; 
        String k = "";

        for (int i = 0; i < s.length(); i++) 
        {
            if (s.charAt(i) != ' ' || (i + 1 < s.length() && s.charAt(i + 1) != ' ')) 
            {
                if (first_ltr || s.charAt(i) != ' ') 
                {
                    k += s.charAt(i);
                    first_ltr = true;
                }
            }
        }
        System.out.println("Trimmed String: " + k + " of Length: " + k.length());
        System.out.println();
    }
}