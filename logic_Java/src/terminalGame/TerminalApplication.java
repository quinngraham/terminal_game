package terminalGame;


import java.io.IOException;
import javafx.application.Application;
import javafx.stage.Stage;
import terminalGame.userInterface.IUserInterfaceContract;

public class TerminalApplication extends Application{
    private IUserInterfaceContract.View uiImpl;

    @Override
    public void start(Stage primaryStage) throws Exception{
        uiImpl = new UserInterfaceImpl(primaryStage);
        try {
            TerminalBuildLogic.build(uiImpl);
        } catch(IOException e){
            e.printStackTrace();
            throw e;
        }
    }

    public static void main(String[] args){
        launch(args);
    }
}
