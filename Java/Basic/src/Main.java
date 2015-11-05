public class Main {

    public static void main(String[] args) {

        System.out.println("Hello World!");

        BusinessMan man = new BusinessMan("Damir", "Sampo Software", "JavaScript developer");

        man.tellYourInfo();


    }
}

class Man {
    String name;
    public Man(String name){ this.name = name; }
    public void tellYourName(){
        System.out.println("My name is " + name);
    }
}

class BusinessMan extends Man {
    String company;
    String position;
    public BusinessMan(String name, String company, String position){
        super(name);
        this.company = company;
        this.position = position;
    }
    public void tellYourInfo(){
        System.out.println("I work in " + company);
        System.out.println("My position is " + position);
        tellYourName();
    }
}