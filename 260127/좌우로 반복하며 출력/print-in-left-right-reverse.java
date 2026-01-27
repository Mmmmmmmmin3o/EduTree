import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int temp=N;
        int[][] answer=new int[N][N];

        for(int i=1; i<N+1; i++){
            temp=N;
            for(int j=1; j<N+1; j++){
                if(i%2!=0){
                    answer[i-1][j-1]=j;
                }
                else{
                    answer[i-1][j-1]=temp--;
                }
                System.out.printf("%d", answer[i-1][j-1]);
            }
            System.out.println();
        }

    }
}