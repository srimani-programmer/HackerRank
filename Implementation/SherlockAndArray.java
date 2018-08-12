import java.util.Scanner;

class SherlockArray{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int n;
        int[] a;
        for(int i=0;i<t;i++){
            n = in.nextInt();
            a = new int[n];

            for(int j=0;j<n;j++){
                a[i] = in.nextInt();
            }

            int low =1;
            int high = n-1;
            int mid = (low+high)/2;
            System.out.println(mid);
            int leftSum = 0;
            int rightSum = 0;

            for(int k=0;k<mid;k++){
                leftSum = leftSum + a[k];
            }System.out.println(leftSum);
            for(int l=mid+1;l<n;l++){
                rightSum = rightSum +a[l];
            }System.out.println(rightSum);

            if(leftSum == rightSum){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}