package ex2;

public class CriaElevador {
	
	public static void main(String[] args) {
		Elevador e1 = new Elevador(15, 8);
		
		e1.Entra();
		e1.Sai();
		e1.Sobe();
		System.out.println(e1.getPassageiros()+" "+ e1.getAndar_atual()+"\n");
	}
}
