// Inheritance of static members

public class Main {

    public static void main(String[] args) {

        Adder a = new Adder();
        AdderFriend af = new AdderFriend();
        a.add(1);
        af.friendAdd(3);
        AdderFriend.val += 5;
        af.showVal();

    }
}

class Adder{
    public static int val = 0;
    public void add(int num){
        val += num;
    }
}

class AdderFriend extends Adder{
    public void friendAdd(int num){
        val += num;
    }
    public void showVal(){
        System.out.println(val);
    }
}