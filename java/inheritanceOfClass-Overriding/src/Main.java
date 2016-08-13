public class Main {

    public static void main(String[] args) {

        NotebookComp nc = new NotebookComp("James", 5);
        TabletNotebook tn = new TabletNotebook("Olivia", 5, "ISE-241-242");

        nc.movingCal();
        tn.write("ISE-241-242");

    }
}

class Computer{
    String owner;

    public Computer(String name){ owner = name; }

    public void calculate(){
        System.out.println("We calculate your orded.");
    }
}

class NotebookComp extends Computer{
    int battary;

    public NotebookComp(String name, int initChag){
        super(name);
        battary=initChag;
    }

    public void chanrging(){
        battary+=5;
    }

    public void movingCal(){

        if(battary < 1){
            System.out.println("Need charging.");

            return;
        }

        System.out.print("While moving ");
        calculate();
        battary-=1;
    }
}

class TabletNotebook extends NotebookComp{
    String regstPenModel;

    public TabletNotebook(String name, int initChag, String pen){
        super(name, initChag);
        regstPenModel=pen;
    }

    public void write(String penInfo){
        if (battary<1){
            System.out.println("Need charging");
            return;
        }

        if (regstPenModel.compareTo(penInfo)!=0){
            System.out.println("It is not a correct pen.");
            return;
        }

        System.out.println("Processing our writing.");
        battary-=1;
    }
}
