package ex4;

public class Funcionario{
	protected String nome;
	protected String telefone;
	protected String matricula;
	protected double salario;
	
	public String getNome() {
		return nome;
	}
	public String getTelefone() {
		return telefone;
	}
	public String getMatricula() {
		return matricula;
	}
	public double getSalario() {
		return salario;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	Funcionario(String nome, String telefone, String matricula, double salario){
		setNome(nome);
		setTelefone(telefone);
		setMatricula(matricula);
		setSalario(salario);
	}
	
	public double aumentoSalario(double percentual) {
		percentual++;
		return salario * percentual; 
	}
}
