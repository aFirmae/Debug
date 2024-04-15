public class MakingChangeProblem {

    public static int[][] createChangeTable(int[] denominations, int totalAmount) {
        int numOfDenominations = denominations.length;
        int[][] changeTable = new int[numOfDenominations + 1][totalAmount + 1];

        // Initialize the change table with a large value
        for (int i = 0; i <= numOfDenominations; i++) {
            for (int j = 0; j <= totalAmount; j++) {
                changeTable[i][j] = Integer.MAX_VALUE;
            }
        }

        // Fill the first column with 0s
        for (int i = 0; i <= numOfDenominations; i++) {
            changeTable[i][0] = 0;
        }

        // Fill the rest of the table using the given formula
        for (int i = 1; i <= numOfDenominations; i++) {
            for (int j = 1; j <= totalAmount; j++) {
                if (j < denominations[i - 1]) {
                    changeTable[i][j] = changeTable[i - 1][j];
                } else {
                    changeTable[i][j] = Math.min(changeTable[i - 1][j], 1 + changeTable[i][j - denominations[i - 1]]);
                }
            }
        }

        return changeTable;
    }

    public static void printChangeTable(int[][] changeTable) {
        for (int i = 1; i < changeTable.length; i++) {
            for (int j = 0; j < changeTable[i].length; j++) {
                System.out.print(changeTable[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[] denominations = {1, 3, 4, 7, 8};
        int totalAmount = 12;

        int[][] changeTable = createChangeTable(denominations, totalAmount);
        printChangeTable(changeTable);
    }
}
