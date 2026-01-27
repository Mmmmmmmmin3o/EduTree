import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int start = sc.nextInt();
        int end = sc.nextInt();

        int count=0;

        for(int i=start; i<end; i++){
            int div_count=0;
            for(int d=1; d<i+1; d++){
                if(i%d==0) div_count++;
            }
            if(div_count==3){
                count++;
            }
        }
        System.out.println(count);
    }
}