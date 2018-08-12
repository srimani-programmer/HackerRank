import java.util.*;
class IceCream{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int testCases = in.nextInt();
        for(int i=1;i<=testCases;i++){
            int money = in.nextInt();
            int noOfFlavours = in.nextInt();
            int[] icecreams = new int[noOfFlavours];
            int[] scores = new int[noOfFlavours];
           // int size = 0;
            for(int j=0;j<noOfFlavours;j++){
                icecreams[i] = in.nextInt();
            }
            
            for(int k=0;k<noOfFlavours;k++){

                for(int k1=k;k1<noOfFlavours;k1++){
                    if((money == icecreams[k] + icecreams[k1]) && (k1 != k)){
                            scores[k] = k+1;
                            scores[k1] =k1+1;
                        
                    }
                }

            }
            Arrays.sort(scores);
            for(int s=0;s<scores.length;s++){
                System.out.print(scores[s]+" ");
            }

        }

    }
}