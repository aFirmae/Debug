import java.util.Scanner;
public class Inherit3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Player name: ");
        String name = sc.nextLine();
        System.out.print("Player role: ");
        String role = sc.nextLine().toLowerCase();

        switch (role)
        {
            case "warrior":
                System.out.print("Power: ");
                int power = sc.nextInt();
                Warrior w = new Warrior(name, role, power);
                System.out.print("New power: ");
                int newPower = sc.nextInt();
                w.increasePower(newPower);
                System.out.print("New role: ");
                sc.nextLine();

                System.out.println("Player: " + w.name + " Role: " + w.role + " Power: " + w.power);
                break;

            case "mage":
                System.out.print("Mana: ");
                int mana = sc.nextInt();
                Mage m = new Mage(name, role, mana);
                System.out.print("New mana: ");
                int newMana = sc.nextInt();
                m.increaseMana(newMana);
                System.out.print("New role: ");
                sc.nextLine();

                System.out.println("Player: " + m.name + " Role: " + m.role + " Mana: " + m.mana);
                break;

            case "archer":
                System.out.print("Arrow count: ");
                int arrows = sc.nextInt();
                Archer a = new Archer(name, role, arrows);
                System.out.print("New arrow count: ");
                int newArrows = sc.nextInt();
                a.increaseArrows(newArrows);
                System.out.print("New role: ");
                sc.nextLine();

                System.out.println("Player: " + a.name + " Role: " + a.role + " Arrow count: " + a.arrows);
                break;

            case "healer":
                System.out.print("Heal: ");
                int heal = sc.nextInt();
                Healer h = new Healer(name, role, heal);
                System.out.print("New heal: ");
                int newHeal = sc.nextInt();
                h.increaseHeal(newHeal);
                System.out.print("New role: ");
                sc.nextLine();

                System.out.println("Player: " + h.name + " Role: " + h.role + " Heal: " + h.heal);
                break;

            default:
                System.out.println("No such role exists yet!");
                break;
        }
    }
}
class Player
{
    String name, role;
    Player(String name, String role)
    {
        this.name = name;
        this.role = role;
    }
}
class Warrior extends Player
{
    int power;
    Warrior(String name, String role, int power)
    {
        super(name, role);
        this.power = power;
    }
    void increasePower(int newPower)
    {
        power = newPower;
    }
}
class Mage extends Player
{
    int mana;
    Mage(String name, String role, int mana)
    {
        super(name, role);
        this.mana = mana;
    }
    void increaseMana(int newMana)
    {
        mana = newMana;
    }
}
class Archer extends Player
{
    int arrows;
    Archer(String name, String role, int arrows)
    {
        super(name, role);
        this.arrows = arrows;
    }
    void increaseArrows(int newArrows)
    {
        arrows = newArrows;
    }
}
class Healer extends Player
{
    int heal;
    Healer(String name, String role, int heal)
    {
        super(name, role);
        this.heal = heal;
    }
    void increaseHeal(int newHeal)
    {
        heal = newHeal;
    }
}