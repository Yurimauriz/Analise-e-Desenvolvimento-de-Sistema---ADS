package Atividade03;

public class Main {
    public static void main(String[] args) {
        Curso curso1 = new Curso("Sistemas de Informação");
        curso1.adicionarDisciplina("Engenharia de Software");
        curso1.adicionarDisciplina("Estruturas de Dados");
        curso1.adicionarDisciplina("Redes de Computadores");

        Curso curso2 = new Curso("Análise e Desenvolvimento de Sistemas");
        curso2.adicionarDisciplina("POO");
        curso2.adicionarDisciplina("Banco de Dados");
        curso2.adicionarDisciplina("Segurança da Informação");

        Aluno joao = new Aluno("João", curso1);
        joao.adicionarDisciplina("Engenharia de Software");
        joao.adicionarDisciplina("Redes de Computadores");
        joao.adicionarDisciplina("Banco de Dados"); // não pertence ao curso

        Aluno yuri = new Aluno("Yuri Mauriz", curso2);
        yuri.adicionarDisciplina("POO");
        yuri.adicionarDisciplina("Banco de Dados");
        yuri.adicionarDisciplina("Algoritmos"); // também não pertence ao curso

        joao.mostrarDisciplinas();
        yuri.mostrarDisciplinas();
    }
}
