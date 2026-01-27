import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int[][] arr=new int[4][4];
        int[][] answer=new int[4][1];

        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                arr[i][j]=sc.nextInt();
                answer[i][0]+=arr[i][j];
            }
            System.out.println(answer[i][0]);
        }
    }
}