
public class stack_overflow{


	public int calcule(int n){

		int resultat;

		if(n >= 0){
			resultat = 1 + calcule(n -1);
			
		}else{
			resultat = 0;
		}

		return resultat;
	}


	public static void main(String[] arg){
		String resultat;
		resultat = String.ValueOf(calcule(1000));
	System.out.println(resultat);

	}

}


