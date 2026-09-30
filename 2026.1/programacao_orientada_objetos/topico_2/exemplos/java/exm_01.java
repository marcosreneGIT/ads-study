// Define a classe Pessoa

public class Pessoa{
    // Definindo os atributos:

    String nome;
    int idade;
    String profissao;

    // Criando um método

    void ola(){
        /*this.nome irá acessar o atributo "nome" do objeto que 
        invocou o método ola.Idem para this.idade e this.profissão.*/

        System.out.println("Olá, eu sou " + this.nome + ", 
        tenho " + this.idade + "anos e sou" + this.profissao);
    }
}

//exm-02 ...