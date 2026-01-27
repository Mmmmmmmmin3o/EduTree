import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        int M=sc.nextInt();

        int[][] arr=new int[N][M];
        int[][] arr2=new int[N][M];

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                arr2[i][j]=sc.nextInt();
                if(arr[i][j]!=arr2[i][j]){
                    System.out.printf("1 ");
                }
                else{
                    System.out.printf("0 ");
                }
            }
            System.out.println();
        }
    }
}