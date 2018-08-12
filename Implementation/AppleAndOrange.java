import java.util.Scanner;

class Apples{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int startPoint = in.nextInt();
        int endPoint = in.nextInt();
        int appleTree = in.nextInt();
        int orangeTree = in.nextInt();
        int noOfApples = in.nextInt();
        int noOfOranges = in.nextInt();

        int applesCount = 0;
        int orangeCount = 0;

        for(int i=0;i<noOfApples;i++){
            int applePosition = appleTree + in.nextInt();
            if(applePosition >= startPoint && applePosition <= endPoint)
                applesCount++;
        }

        for(int i=0;i<noOfOranges;i++){
            int orangePosition = orangeTree + in.nextInt();

            if(orangePosition<= endPoint && orangePosition>= startPoint)
                orangeCount++;
        }

        System.out.println(applesCount);
        System.out.println(orangeCount);

    }
}