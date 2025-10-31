public class Funcionario {
    String Nome;
    String Departamento;
    double Salario;
    String DataDeEntradaNoBanco;
    String Rg;
    public Funcionario(String nome, String departamento, double salario, String dataDeEntradaNoBanco, String rg) {
        this.Nome = nome;
        this.Departamento = departamento;
        this.Salario = salario;
        this.DataDeEntradaNoBanco = dataDeEntradaNoBanco;
        this.Rg = rg;
    }
    
    public void recebeAumento(double novoValor){
        Salario += novoValor;
        System.out.println("Seu novo Salario é: " + Salario);

    }
    
    public void calculaGanhoAnual(){
        double ganhoAnual = Salario * 12;
        System.out.println("Seu salario anual é: " + ganhoAnual);
    }

    public void teste(){
        System.out.println("Seu nome é: " + Nome);
        System.out.println("Seu departamento é: " + Departamento);
        System.out.println("Seu salario atual é: " + Salario);
        System.out.println("Sua data de entrada no banco foi: " + DataDeEntradaNoBanco);
        System.out.println("Seu rg é: " + Rg);
    }

}
