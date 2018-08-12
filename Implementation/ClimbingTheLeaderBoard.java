import java.util.Scanner;

class Leader{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int gameScores = in.nextInt();
        int[] game = new int[gameScores];

        for(int i=0;i<gameScores;i++){
            game[i] = in.nextInt();
        }
        int aliceScores = in.nextInt();
        int[] alice = new int[aliceScores];

        for(int i=0;i<aliceScores;i++){
            alice[i] = in.nextInt();
        }
        int[] gameRank = new int[gameScores];
        int rank = 1;
        for(int i=0;i<(game.length-1);i++){
            if(game[i] == game[i+1]){
                gameRank[i] = rank;
                gameRank[i+1] = rank;
            }else if(game[i] > game[i+1]){
                gameRank[i] = rank;
                gameRank[i+1] = rank+1;
                rank++;
            }
        }
        /*for(int i=0;i<gameRank.length;i++){
            System.out.println("The game score is:"+i+":"+gameRank[i]);
        }*/
        int[] aliceRanks = new int[aliceScores];
       // int aliceRank = 0;
        for(int i=0;i<alice.length;i++){
            for(int j=0;j<game.length-1;j++){
                if(alice[i] < game[j] && alice[i] > game[j+1]){
                    aliceRanks[i] = gameRank[j] + 1;
                }else if(alice[i] == game[j]){
                    aliceRanks[i] = gameRank[j];
                }else if(alice[i] < game[game.length-1]){
                    aliceRanks[i] = gameRank[game.length-1] + 1;
                }else if(alice[i]>game[i]){
                    aliceRanks[i] = 1;
                }
            }
        }

        for(int i=0;i<aliceRanks.length;i++){
            System.out.println(aliceRanks[i]);
        }
    }
}