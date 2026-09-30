// ... exm-01

public calss Main{
    public static void main(String[] args){
        // Criando dois objetos da classe Pessoa: p01 e p02

        Pessoa p01 = new Pessoa()
        Pessoa p02 = new Pessoa()

        // Acessamos os atributos (variáveis internas) ultizando ".": 
        // nomeDoObjeto.nomeDoAtributo

        p01.nome = "Mario";
        p01.idade = 40;
        p01.profissao = "cientista";

        p02.nome = "Joana";
        p02.idade = 35;
        p02.profissao = "engenheira"

        // Invocamos os métodos de um objeto também usando ".": 
        // nomeDoObjeto.nomeDoMetodo(parametros)

        p01.ola();
        p02.ola();
    }   
}