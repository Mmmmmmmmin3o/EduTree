import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int[][] answer=new int[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i%2!=0){
                    answer[j][i]=n-j;
                }
                else{
                    answer[j][i]=j+1;
                }
            }

        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.printf("%d", answer[i][j]);
            }
            System.out.println();
        }
    }
}