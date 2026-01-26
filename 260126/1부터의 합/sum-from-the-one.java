import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        int temp=0;

        for(int i=1; i<101; i++){
            temp+=i;
            if(temp>=N){
                System.out.println(i);
                break;
            }
        }
    }
}