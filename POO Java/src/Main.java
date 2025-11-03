public class Main {
    public static void main(String[] args) {
        Funcionario f1 = new Funcionario("Yuri Mauriz", "Mambee", 1600, "10/11/2025", "2314124124");

        f1.teste();
        f1.recebeAumento(1600);
        f1.calculaGanhoAnual();

        Professor p1 = new Professor("Jorge", "IFPI", 10000, "10/11/2023", "122132324", "POO", 60);

        
    }
}
