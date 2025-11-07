package Atividade03;

public class Aluno {
    String nome;
    Curso curso;
    String disciplina1;
    String disciplina2;
    String disciplina3;

    public Aluno(String nome, Curso curso) {
        this.nome = nome;
        this.curso = curso;
    }

    public void adicionarDisciplina(String nomeDisciplina) {
        if (!curso.temDisciplina(nomeDisciplina)) {
            System.out.println("Essa disciplina não pertence ao curso " + curso.nome);
            return;
        }

        if (disciplina1 == null) {
            disciplina1 = nomeDisciplina;
        } else if (disciplina2 == null) {
            disciplina2 = nomeDisciplina;
        } else if (disciplina3 == null) {
            disciplina3 = nomeDisciplina;
        } else {
            System.out.println("O aluno " + nome + " já atingiu o limite de disciplinas!");
            return;
        }
        System.out.println("Disciplina " + nomeDisciplina + " adicionada ao aluno " + nome);
    }

    public void mostrarDisciplinas() {
        System.out.println("\nDisciplinas do aluno " + nome + ":");
        if (disciplina1 != null)
            System.out.println("- " + disciplina1);
        if (disciplina2 != null)
            System.out.println("- " + disciplina2);
        if (disciplina3 != null)
            System.out.println("- " + disciplina3);
    }
}
