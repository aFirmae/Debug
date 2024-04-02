import java.util.HashMap;

public class CLI
{
    public static void main(String[] args)
    {
        int valid = 0, invalid = 0;
        HashMap<String, String> map = new HashMap<>();

        for(String arg: args) {
           try {
               Integer.parseInt(arg);
               map.put(arg, "Valid");
               valid++;
           }
           catch (NumberFormatException e) {
               map.put(arg, "Invalid");
               invalid++;
           }
        }
        System.out.println();

        int i = 1;
        for (HashMap.Entry<String, String> entry : map.entrySet()) {
            System.out.println(i++ + ". " + entry.getKey() + " : " + entry.getValue());
        }

        System.out.println("Valid Arguments: " + valid);
        System.out.println("Invalid Arguments: " + invalid);
    }
}
