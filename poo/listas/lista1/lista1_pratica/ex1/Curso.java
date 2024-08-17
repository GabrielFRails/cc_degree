package ex1;

public class Curso {
	// atributos

	private String nomeCurso;
	private String horario;
	private String professor;
	private String local;
	
	// construtor
	public Curso(String nomeCurso, String horario, String professor, String local) {
		this.nomeCurso = nomeCurso;
		this.horario = horario;
		this.professor = professor;
		this.local = local;
	}

	public String getNomeCurso() {
		return nomeCurso;
	}

	public void setNomeCurso(String nomeCurso) {
		this.nomeCurso = nomeCurso;
	}

	public String getHorario() {
		return horario;
	}

	public void setHorario(String horario) {
		this.horario = horario;
	}

	public String getProfessor() {
		return professor;
	}

	public void setProfessor(String professor) {
		this.professor = professor;
	}

	public String getLocal() {
		return local;
	}

	public void setLocal(String local) {
		this.local = local;
	}

	@Override
	public String toString() {
		return "Curso{" +
				"nomeCurso='" + nomeCurso + '\'' +
				", horario='" + horario + '\'' +
				", professor='" + professor + '\'' +
				", local='" + local + '\'' +
				'}';
	}
}