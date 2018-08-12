import java.util.Scanner;

class Section{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int totalStrength;
        int rollno;
        int noOfSections;
        int[] sectionDetails;

        for(int i=0;i<n;i++){
            totalStrength = in.nextInt();
            rollno = in.nextInt();
            noOfSections = in.nextInt();
            sectionDetails = new int[noOfSections];
            for(int j=0;j<noOfSections;j++){
                sectionDetails[j] = in.nextInt();
            }

            int[] endpoint = new int[noOfSections];
            endpoint[0] = sectionDetails[0];

        for(int k=1;k<noOfSections;k++){

            endpoint[k] = sectionDetails[k-1] + sectionDetails[k];
        }
            for(int k1 =0;k1<endpoint.length-1;k1++){
                if(rollno < endpoint[0]){
                    System.out.println(k1+1);
                }else if(rollno<endpoint[k1] && rollno<endpoint[k1+1]){
                    System.out.println(k1+1);
                }
            }
        }
    }
}