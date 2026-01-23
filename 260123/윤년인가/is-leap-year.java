import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int Y=sc.nextInt();

        if(Y%4==0){
            if(Y%400!=0&&Y%100==0){
                System.out.printf("false");
            }
            else   System.out.printf("true");
        }
        else{
            System.out.printf("false");
        }
    }

}