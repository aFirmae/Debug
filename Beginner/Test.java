public class Test
{
    public static void main(String[] args)
    {

        String s = "NilAsHis saHa, anD unKnoWn.", res = "";

        for (char c : s.toCharArray())
        {
            res += (char) (c | 32);
        }

        System.out.println(res);
    }
}
