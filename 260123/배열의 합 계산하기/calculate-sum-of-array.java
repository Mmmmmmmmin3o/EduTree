public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        int[] A={3,1,4,5,9};
        int N=A.length;
        int sum=0;

        for(int i=0; i<N; i++){
            if(i==0||i==2){
                continue;
            }
            else    sum+=A[i];
        }

        System.out.println(sum);
    }
}