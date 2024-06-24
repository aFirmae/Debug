public class Threading_2 {
    public static void main(String[] args) {

        MyThread1 t1 = new MyThread1();
        t1.start();

        new MyThread2().start();
        new MyThread3().start();
    }
}

class MyThread1 extends Thread {

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            if (i == 2)
                Thread.yield();
            System.out.println("From MyThread1 : " + i);
        }
    }
}

class MyThread2 extends Thread {

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            if (i == 2) {
                try { 
                    Thread.sleep(1000);
                }
                catch (Exception e) {
                    System.out.println(e);  
                }
            }
            System.out.println("From MyThread2 : " + i);
        }
    }
}

class MyThread3 extends Thread {
    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            if (i == 2) {
                try { 
                    stop();
                }
                catch (Exception e) {
                    System.out.println(e);
                }
            }
            System.out.println("From MyThread3 : " + i);
        }
    }
}
