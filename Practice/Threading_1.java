public class Threading_1 {
    public static void main(String[] args) {
        
        MyThread1 t1 = new MyThread1();
        MyThread2 t2 = new MyThread2();
        MyThread3 t3 = new MyThread3();

        t1.setPriority(Thread.NORM_PRIORITY + 1);
        t2.setPriority(t1.getPriority() + 2);
        t3.setPriority(t1.getPriority()  - 3);

        System.out.println("MyThread1 Priority : " + t1.getPriority());
        System.out.println("MyThread2 Priority : " + t2.getPriority());
        System.out.println("MyThread3 Priority : " + t3.getPriority());
    }
}

class MyThread1 extends Thread {

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("From MyThread1 : " + i);
        }
    }
}

class MyThread2 extends Thread {

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("From MyThread2 : " + i);
        }
    }
}

class MyThread3 extends Thread {

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("From MyThread3 : " + i);
        }
    }
}