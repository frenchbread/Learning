// Inheritance of private members by indirect way

public class Main {

    public static void main(String[] args) {

        SavingAccount sAcc = new SavingAccount(1000);

        sAcc.saveMoney(1000);
        sAcc.saveMoney(1000);
        sAcc.showSavedMoney();

    }
}

class Accumulator{
    private int val;

    Accumulator (int init){
        val = init;
    }
    protected void accummulate(int num) {
        if (num<0) return;
        val += num;
    }
    protected int getAccVal(){
        return val;
    }
}

class SavingAccount extends Accumulator{
    public SavingAccount(int initDep){
        super(initDep);
    }
    public void saveMoney(int money){
        accummulate(money);
    }
    public void showSavedMoney(){
        System.out.println("Accumulated money: " + getAccVal());
    }
}