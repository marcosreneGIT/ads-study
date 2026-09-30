public class ValorNegativo extends Exception {
      public ValorNegativo(String mensagem) {
            super(mensagem);
      }
}

import java.util.*;

public class Main {
      public static void main(String args[]) {
            double resultado = 0;

            try {
                  resultado = fazDivisao( );
            }
    
            catch (ArithmeticException e) {
                  System.out.println("Você tentou dividir por zero!");
                  resultado = -1;
            } catch (InputMismatchException e) {
                  System.out.println("Número inválido!");
                  resultado = -1;
            }
            catch (ValorNegativo e) {
                  System.out.println("Valor negativo.");
            }

            finally {
                  System.out.println("O resultado da divisão foi: " + resultado);
            }
      }

      public static double fazDivisao( ) throws InputMismatchException, ArithmeticException, ValorNegativo {
            int numero1, numero2;

            Scanner scan = new Scanner(System.in);
 
                  System.out.println("Digite o numerador: ");
                  numero1 = scan.nextInt( );
                  System.out.println("Digite o denominador: ");
                  numero2 = scan.nextInt( );
                  scan.close( );
  
                  if (numero1 < 0 || numero2 < 0) {
                        throw new ValorNegativo("Erro! Você não deveria digitar valores negativos!");
                  }

                  return (double)numero1/numero2;
            }
      }