package ex4;

public class Gerente extends Funcionario{
	protected double bonificacao;
	
	public double getBonificacao() {
		return bonificacao;
	}
	public void setBonificacao(double bonificacao) {
		this.bonificacao = bonificacao;
	}
	Gerente(double bonificacao, String nome, String telefone, String matricula, double salario){
		super(nome, telefone, matricula, salario);
		setBonificacao(bonificacao);
	}
	public void mostraSalarioGerente() {
		double a = super.salario + bonificacao;
		System.out.println(a+"\n");
	}
}
