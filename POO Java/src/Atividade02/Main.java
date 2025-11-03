package Atividade02;

public class Main {
    public static void main(String[] args) {

        System.out.println("===== INGRESSO NORMAL =====");
        Normal ingressoNormal = new Normal(30);
        ingressoNormal.tipoIngresso();
        ingressoNormal.imprimirValor();

        System.out.println("\n===== INGRESSO VIP =====");
        Vip ingressoVip = new Vip(30, 30);
        ingressoVip.imprimirValor();

        System.out.println("\n===== CAMAROTE INFERIOR =====");
        CamaroteInferior inferior = new CamaroteInferior(30, 30, "Setor B");
        inferior.imprimirValor();
        inferior.imprimirLocalizacao();

        System.out.println("\n===== CAMAROTE SUPERIOR =====");
        CamaroteSuperior superior = new CamaroteSuperior(30, 30, 50, "Setor A");
        superior.imprimirValor();
        superior.imprimirLocalizacao();

        System.out.println("\n===== FIM DO PROGRAMA =====");
    }
}
