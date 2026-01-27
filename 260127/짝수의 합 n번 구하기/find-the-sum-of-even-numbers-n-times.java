import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        int[] arr=new int[2];
        int answer;

        int i=0;

        while(i<N){
            answer=0;
            for(int a=0; a<arr.length; a++){
                arr[a]=sc.nextInt();
            }
            for(int j=arr[0]; j<=arr[1]; j++){
                if(j%2==0){
                    answer+=j;
                }
            }
            System.out.println(answer);
            i++;
        }
    }
}