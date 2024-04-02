import java.io.*;
import java.util.*;
public class Names_asc
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Number of people: ");
        int n = Integer.parseInt(br.readLine());
        String[] names = new String[n];

        for(int i = 0; i < n; i++)
        {
            System.out.print("Enter name: ");
            String name = br.readLine();
            names[i] = name;
        }
        sort(names);

        System.out.println("Names in ascending order: ");
        for(int i = 0; i < n; i++)
        {
            System.out.println(i + 1 + ". " + names[i]);
        }
    }
    public static void sort(String[] names)
    {
        for(int i = 0; i < names.length - 1; i++)
        {
            for(int j = 0; j < names.length - i - 1; j++)
            {
                if(names[j + 1].compareTo(names[j]) < 0)
                {
                    String temp = names[j + 1];
                    names[j + 1] = names[j];
                    names[j] = temp;
                }
            }
        }
    }
}
