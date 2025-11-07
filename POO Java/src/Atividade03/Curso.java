package Atividade03;

public class Curso {
    String nome;
    String disciplina1;
    String disciplina2;
    String disciplina3;

    public Curso(String nome) {
        this.nome = nome;
    }

    public void adicionarDisciplina(String nomeDisciplina) {
        if (disciplina1 == null) {
            disciplina1 = nomeDisciplina;
        } else if (disciplina2 == null) {
            disciplina2 = nomeDisciplina;
        } else if (disciplina3 == null) {
            disciplina3 = nomeDisciplina;
        } else {
            System.out.println("Não dá pra adicionar mais disciplinas no curso " + nome);
            return;
        }
        System.out.println("Disciplina " + nomeDisciplina + " adicionada ao curso " + nome);
    }

    boolean temDisciplina(String nomeDisciplina) {
        return nomeDisciplina.equals(disciplina1)
                || nomeDisciplina.equals(disciplina2)
                || nomeDisciplina.equals(disciplina3);
    }
}
