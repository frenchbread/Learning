import java.util.Random;

public class Main {

    public static void main(String[] args) {

        String[] choises = {"Rock", "Paper", "Scissors"};

        for (int i = 0; i < 10; i++) {

            int randomChoise = rps();

            System.out.println(choises[randomChoise]);

        }
    }

    public static int rps(){

        Random rand = new Random();

        int min = 0;
        int max = 2;

        int randomNum = rand.nextInt((max - min) + 1) + min;

        return randomNum;
    }
}