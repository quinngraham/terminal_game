package terminalGame.userInterface;

import terminalGame.basic.TerminalGame;

public interface IUserInterfaceContract {
    interface EventListener{
        void onTerminalInput(int x, int y, int input);
        void onDialogClick();
    }
    interface View{
        void setListener(IUserInterfaceContract.EventListener listener);
        void updateSquare(int x, int y, int input);
        void updateBoard(TerminalGame game);
        void showDialogue(String message);
        void showError(String message);
    }
}
