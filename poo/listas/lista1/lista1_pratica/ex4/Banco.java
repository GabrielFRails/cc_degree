package ex4;

public class Banco{

	public static void main(String[] args) {
		Cliente c1 = new Cliente("Eduardo", "62987654321", "1234567890", 20);
		Gerente g1 = new Gerente(500.50, "Renato", "629999999", "01020304", 6043.55);
		CaixaDeBanco cx1 = new CaixaDeBanco("18:00", "Ricardo", "62080706", "202009008", 1349.56);
		
		g1.mostraSalarioGerente();
		g1.salario = g1.aumentoSalario(0.2);
		g1.mostraSalarioGerente();
		
		cx1.mostraSalarioCaixa();
		cx1.salario = cx1.aumentoSalario(0.35);
		cx1.mostraSalarioCaixa();
		
		c1.mostrarCliente();
		c1.desativar();
		c1.desativar();
		c1.mostrarCliente();

	}

}
