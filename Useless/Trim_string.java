public class Trim_string 
{
    public static void main(String[] args) 
    {
        String s = "  Hello   World  "; 
        String k = "";

        for (int i = 0; i < s.length(); i++) 
        {
            if (s.charAt(i) != ' ' || (i + 1 < s.length() && s.charAt(i + 1) != ' ')) 
            {
                    k += s.charAt(i);
            }
        }
        System.out.println("Trimmed String: " + k + " of Length: " + k.length());
        System.out.println();
    }
}