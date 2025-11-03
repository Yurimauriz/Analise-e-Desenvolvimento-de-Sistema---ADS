package Atividade02;
public class Vip extends Ingresso {
    protected double valorAdicional;

    public Vip(double valor){
        super(valor);
    }


    public Vip(double valor, double valorAdicional) {
        super(valor);
        this.valorAdicional = valorAdicional;
    }

    public double getValorVip() {
        return valor + valorAdicional;
    }

    @Override
    public void imprimirValor(){
        System.out.println("O valor de ingresso vip é: " + getValorVip());
    }

}
