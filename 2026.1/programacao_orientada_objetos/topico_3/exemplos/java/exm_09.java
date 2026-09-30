public class Main {
      public static void main(String[] args){
            ContaEspecial conta1 = new ContaEspecial(1234, 142536, "João", "135.792.468-00", 1000.0) ;
            ContaCorrente conta2 = new ContaCorrente(1234, 192837, "Maria", "864.297.531-00") ;
            
            if (conta1 instanceof ContaEspecial) {
                  System.out.println("conta1 é ContaEspecial") ;
             } else {
                  System.out.println("conta1 NÃO é ContaEspecial") ;
            }
            if (conta1 instanceof ContaCorrente) {
                  System.out.println("conta1 é ContaCorrente") ;
            } else {
                  System.out.println("conta1 NÃO é ContaCorrente") ;
            }
            if (conta2 instanceof ContaEspecial) {
                  System.out.println("conta2 é ContaEspecial") ;
            } else {
                  System.out.println("conta2 NÃO é ContaEspecial") ;
            }
            if (conta2 instanceof ContaCorrente){
                  System.out.println("conta2 é ContaCorrente") ;
            } else {
                  System.out.println("conta2 NÃO é ContaCorrente") ;
            }
      }
}