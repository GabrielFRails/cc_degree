package ex4;

public class CaixaDeBanco extends Funcionario {
	protected String horario;
	
	public String getHorario() {
		return horario;
	}
	public void setHorario(String horario) {
		this.horario = horario;
	}
	CaixaDeBanco(String horario, String nome, String telefone, String matricula, double salario){
		super(nome, telefone, matricula, salario);
		setHorario(horario);
	}
	public void mostraSalarioCaixa() {
		System.out.println(super.getSalario()+"\n");
	}
}
