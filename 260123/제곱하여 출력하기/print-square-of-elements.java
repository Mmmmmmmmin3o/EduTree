import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        double[] N_Score=new double[N];
        int[] answer=new int[N];

        for(int i=0; i<N; i++){
            N_Score[i]=sc.nextInt();
        }

        for(int i=0; i<N; i++){
            answer[i]=(int)Math.pow(N_Score[i],2);
            System.out.printf("%d ", answer[i]);
        }
        
    }
}