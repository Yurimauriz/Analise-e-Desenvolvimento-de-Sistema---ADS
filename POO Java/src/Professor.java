public class Professor extends Funcionario {
    String Disciplina;
    int CargaHoraria;
    
    void Professor(){

    }

    public Professor(String nome, String departamento, double salario, String dataDeEntradaNoBanco, String rg,
            String disciplina, int cargaHoraria) {
        super(nome, departamento, salario, dataDeEntradaNoBanco, rg);
        Disciplina = disciplina;
        CargaHoraria = cargaHoraria;
    }

    public String getDisciplina() {
        return Disciplina;
    }

    public void setDisciplina(String disciplina) {
        Disciplina = disciplina;
    }

    public int getCargaHoraria() {
        return CargaHoraria;
    }

    public void setCargaHoraria(int cargaHoraria) {
        CargaHoraria = cargaHoraria;
    }

    
    
}