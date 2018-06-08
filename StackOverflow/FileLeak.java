import java.io.*;

public class FileLeak {

	public static void main (String[] args) throws IOException{

	try (FileWrite writer = new FileWriter("fic.txt")){

		writer.write("Bonjour Limoges !\n");
	

	}
     }
}
