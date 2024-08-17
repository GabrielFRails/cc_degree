package ex2;

public class Elevador {
	private int andar_atual;
	private int total_andares;
	private int capacidade;
	private int passageiros;
	
	public int getAndar_atual(){
		return andar_atual;
	}
	
	public int getTotal_andares(){
		return total_andares;
	}
	
	public int getCapacidade(){
		return capacidade;
	}
	
	public int getPassageiros(){
		return passageiros;
	}
	
	public void setAndar_atual(int andar_atual) {
		this.andar_atual = andar_atual;
	}

	public void setTotal_andares(int total_andares) {
		this.total_andares = total_andares;
	}

	public void setCapacidade(int capacidade) {
		this.capacidade = capacidade;
	}

	public void setPassageiros(int passageiros) {
		this.passageiros = passageiros;
	}
	
	Elevador( int total_andares, int capacidade){
		setAndar_atual(0);
		setTotal_andares(total_andares);
		setCapacidade(capacidade);
		setPassageiros(0);
	}
	
	public int Entra(){
		if(passageiros<capacidade) passageiros++;
		return passageiros;
	}
	public int Sai() {
		if(passageiros>0) passageiros--;
		return passageiros;
	}
	
	public int Sobe() {
		if(andar_atual<total_andares) andar_atual++;
		return andar_atual;
	}
	
	public int Desce() {
		if(andar_atual>0) andar_atual--;
		return andar_atual;
	}
}
