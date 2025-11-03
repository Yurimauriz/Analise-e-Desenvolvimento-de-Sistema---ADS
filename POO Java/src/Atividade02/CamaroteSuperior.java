package Atividade02;

public class CamaroteSuperior extends Vip {
    private final double valorExtra; 
    private String localizacao;

    public CamaroteSuperior(double valor, double valorAdicional, double valorExtra, String localizacao) {
        super(valor, valorAdicional);
        this.valorExtra = valorExtra;
        this.localizacao = localizacao;
    }

    public double getValorIngresso() {
        return valor + valorAdicional + valorExtra;
    }

    public String getLocalizacao() {
        return localizacao;
    }

    public void setLocalizacao(String localizacao) {
        this.localizacao = localizacao;
    }

    public void imprimirLocalizacao() {
        System.out.println("Localização: " + getLocalizacao());
    }

    @Override
    public void imprimirValor() {
        System.out.println("Valor Camarote Superior: R$ " + getValorIngresso());
    }
}