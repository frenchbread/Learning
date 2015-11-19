public class Main {

    public static void main(String[] args) {

        Police hasGun = new Police(5,3);

        hasGun.shot();
        hasGun.putHandcuff();

        Police doesNotHaveGun = new Police(0, 3);
        doesNotHaveGun.shot();

    }
}

class Gun{
    int bullet;

    public Gun(int bnum){
        bullet = bnum;
    }
    public void shot(){
        System.out.println("BANG!");
        bullet--;
    }
}

class Police{
    int handcuffs;
    Gun pistol;

    public Police(int bnum, int bcuff) {
        handcuffs = bcuff;
        if (bnum != 0)
            pistol = new Gun(bnum);
        else
            pistol = null;
    }

    public void putHandcuff(){
        System.out.println("SNAP!");
        handcuffs--;
    }

    public void shot(){
        if(pistol == null)
            System.out.println("Void BANG!");
        else
            pistol.shot();
    }
}
