import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int grade=sc.nextInt();

        for(int i=grade; i<101; i++){
            if(i>89){
                System.out.printf("A ");
            }
            else if(i>79){
                System.out.printf("B ");
            }
            else if(i>69){
                System.out.printf("C ");
            }
            else if(i>59){
                System.out.printf("D ");
            }
            else{
                System.out.printf("F ");
            }
        }
    }
}