import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        int book_price=3000;
        int mask_price=1000;

        Scanner sc=new Scanner(System.in);
        int wallet=sc.nextInt();

        if(wallet>=book_price){
            System.out.println("book");
        }
        else if(wallet>=mask_price){
            System.out.println("mask");
        }
        else{
            System.out.println("no");
        }
    }
}