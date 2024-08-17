package ex1;

import java.util.Scanner;

public class TesteCursos {

	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		Curso[] curso = new Curso[4];
		
		for (int i = 0; i < 4; i++) {
			System.out.println("Digite o nome do curso: ");
			String nomeCurso = scan.next();
			System.out.println("Digite o horario do curso: ");
			String horario = scan.next();
			System.out.println("Digite o nome do professor: ");
			String professor = scan.next();
			System.out.println("Digite o local do curso: ");
			String local = scan.next();
			
			curso[i] = new Curso(nomeCurso, horario, professor, local);
			
		}
		
		for (int i = 1; i <= 4; i++) {
			System.out.println("Curso " + i +": " + curso[i-1].toString());
		}

	}

}
