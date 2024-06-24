public class Finally {
    public static void main(String[] args) {
            
            try {
                String str = null;
                System.out.println(str.length());
            } 
            catch (ArithmeticException e) {
                System.out.println("Error: " + e);
            } 
            catch (NullPointerException e) {
                System.out.println("Error: " + e);
            } 
            catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Error: " + e);
            } 
            finally {
                System.out.println("Finally block executed");
            }
    }
}
