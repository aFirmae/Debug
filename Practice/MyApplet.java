import java.applet.Applet;
import java.awt.Graphics;
import java.awt.TextField;

public class MyApplet extends Applet {
    
    TextField t1, t2, t3;
    public void init() {
        t1 = new TextField(8);
        t2 = new TextField(8);
        t3 = new TextField(8);

        add(t1);
        add(t2);
        add(t3);

        t1.setText("0");
        t2.setText("0");
        t3.setText("0");
    }

    public void paint(Graphics g) {

        String s1, s2, s3, small, large;
        int a = 0, b = 0, c = 0;

        try {
            g.drawString("Input a number in each box", 10, 50);

            s1 = t1.getText();
            a = Integer.parseInt(s1);

            s2 = t2.getText();
            b = Integer.parseInt(s2);

            s3 = t3.getText();
            c = Integer.parseInt(s3);

            small = (a < b) ? (a < c ? String.valueOf(a) : String.valueOf(c)) : (b < c ? String.valueOf(b) : String.valueOf(c));
            large = (a > b) ? (a > c ? String.valueOf(a) : String.valueOf(c)) : (b > c ? String.valueOf(b) : String.valueOf(c));

        }
        catch (Exception e) {
            g.drawString("Error in input", 10, 70);
            return;
        }
        
        g.drawString("The smallest number is: " + small, 10, 70);
        g.drawString("The largest number is: " + large, 10, 90);
    }
}
