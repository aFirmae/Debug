
 interface A{
    void sum();
    
}
interface B {
    void sum();
}

class C {
    void display()
    {
        System.out.println("From class C");
    }
}

class D extends C implements A,B {
    public void sum(){
        System.out.println("For interface A and B");
    }
    void print()
    {
        System.out.println("From class D");
    }
}

class E extends D{
    void fromE()
    {
        System.out.println("From class E");
    }
}




public class Hybrid {
    
    public static void main(String[] args) {
       E e = new E();
       e.fromE();
       e.sum();
       e.print();
       e.display(); 
    }
}
