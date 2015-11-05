public class Main {

    public static void main(String[] args) {

        System.out.println("Hello World!");

        Man man = new Man("Damir");

        man.tellYourName();


    }
}

class Man {
    String name;
    public Man(String name){ this.name = name; }
    public void tellYourName(){
        System.out.println("My name is " + name);
    }
}