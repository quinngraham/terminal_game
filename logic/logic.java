import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


class GenLogic{


    /*
        This is going to kind of coordinate all of the different classes that I
        am going to write for the game. It is intended to be extremely simple.
        @Author: quinngraham
        @Date: 8/25/2021
    */
    public static void main(String[] args) {
        System.out.println("yo");
        int i = 0;
        try{
            i = System.in.read();
        }
        catch (Exception e) {
            System.out.println("error reading information: " + e );
        }

        System.out.println((char)i);

    }
}
