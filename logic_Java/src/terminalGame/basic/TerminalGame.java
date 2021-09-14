package terminalGame.basic;
import terminalGame.constants.GameState;

import java.io.Serializable;

public class TerminalGame implements Serializable {
    private final GameState gameState;
    private final int[][] gridState;

    public static final int GRID_BOUNDARY = 9;


    public TerminalGame(GameState gameState, int[][] gridState) {
        this.gameState = gameState;
        this.gridState = gridState;
    }

    public GameState getGameState() {
        return gameState;
    }

    public int[][] getGridState() {
        return SudokuUtilities.copyToNewArray(gridState);
    }
}
