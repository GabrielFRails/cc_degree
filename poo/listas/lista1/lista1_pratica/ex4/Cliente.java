package ex4;

public class Cliente {
	protected String nome;
	protected String telefone;
	protected String cpf;
	protected int idade;
	protected int status; // 0 = inativo, 1 = ativo
	
	public String getNome() {
		return nome;
	}
	public String getTelefone() {
		return telefone;
	}
	public String getCpf() {
		return cpf;
	}
	public int getStatus() {
		return status;
	}
	public int getIdade() {
		return idade;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public void setStatus(int status) {
		this.status = status;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	Cliente(String nome, String telefone, String cpf, int idade){
		setNome(nome);
		setTelefone(telefone);
		setCpf(cpf);
		setIdade(idade);
		setStatus(1);
	}
	
	public int desativar() {
		if(status == 1) status--;
		return status;
	}
	public void mostrarCliente() {
		if(status == 1) {
			System.out.println(nome+"-Tel:"+telefone+"-idade:"+idade+"anos-cpf:"+cpf+"-ativo\n");
		}
		else {
			System.out.println(nome+"-Tel:"+telefone+"-idade:"+idade+"anos-cpf:"+cpf+"-inativo\n");
		}
	}
}
