import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();

        Integer[][] Map  = new Integer[N + 1][];
        for(int i=0; i<N; ++i) {
            Map[i] = new Integer[N + 1];
            String s = sc.nextLine();

            for(int j=0; j<N; ++j)
            {
                Map[i][j] = s.charAt(j)  - '0';
            }
        }

        StringBuilder builder = new StringBuilder();
        QuadTree(0,0, N-1, N-1, Map, builder);

        System.out.println(builder.toString());
    }

    static void QuadTree(int startY, int startX, int endY, int endX, Integer[][] Map, StringBuilder Result)
    {
        int NodeValue = Map[startY][startX];
        for(int i=startY; i<=endY; ++i)
        {
            for(int j=startX; j<=endX; ++j)
            {
                if(Map[i][j] != NodeValue)
                {
                    int midX = (startX + endX) / 2;
                    int midY = (startY + endY) / 2;

                    Result.append('(');
                    QuadTree(startY, startX, midY, midX, Map, Result);
                    QuadTree(startY, midX + 1, midY, endX, Map, Result);
                    QuadTree(midY + 1, startX, endY, midX, Map, Result);
                    QuadTree(midY + 1, midX + 1, endY, endX, Map, Result);
                    Result.append(')');
                    return;
                }
            }
        }
        Result.append(NodeValue);
    }

}
