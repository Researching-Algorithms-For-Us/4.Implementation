import java.util.Scanner;

public class Main {
    static Integer White = 0;
    static Integer Blue = 0;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        Integer[][] Map  = new Integer[N + 1][];
        for(int i=0; i<N; ++i) {
            Map[i] = new Integer[N + 1];

            for(int j=0; j<N; ++j)
            {
                Map[i][j] = sc.nextInt();
            }
        }

        MapCheck(N, 0, 0,  N-1, N-1,  Map);
        System.out.println(White);
        System.out.println(Blue);
    }



    static void MapCheck(int N, int startY, int startX, int endY, int endX,  Integer[][] Map)
    {
        int NodeValue = Map[startY][startX];
        for (int y = startY; y <= endY; y++) {
            for (int x = startX; x <= endX; x++) {
                if (Map[y][x] != NodeValue) {

                    // 분할정복
                    int MidX = (startX + endX) / 2;
                    int MidY = (startY + endY) / 2;

                    MapCheck(N/2, startY, startX, MidY, MidX, Map);
                    MapCheck(N/2, startY, MidX + 1, MidY, endX, Map);
                    MapCheck(N/2, MidY + 1, startX, endY, MidX, Map);
                    MapCheck(N/2, MidY + 1, MidX + 1, endY, endX, Map);
                    return;
                }
            }
        }

        if (NodeValue == 0) {
            White++;
        } else {
            Blue++;
        }
    }
}
