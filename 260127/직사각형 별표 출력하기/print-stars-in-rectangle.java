import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int y=sc.nextInt();
        int x=sc.nextInt();

        for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                System.out.printf("* ");
            }
            System.out.println();
        }
    }
}