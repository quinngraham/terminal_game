package terminalGame.basic;

import java.io.IOException;

public interface IStorage {
    void updateGameData(TerminalGame game) throws IOException;
    TerminalGame getGameData() throws IOException;
}
