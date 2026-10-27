package com.projeto.rmiserver;

import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import com.projeto.rmiinterface.RMIInterface;

public class ServerOperation extends 
UnicastRemoteObject implements RMIInterface{
    private static final long serialVersionUID = 1L;
    protected ServerOperation() throws RemoteException{
        super();
    }

    @Override 
    public String helloTo(String name) throws RemoteException{
        System.err.println(name + "está tentando conectar!");

        return "O servidor diz olá para " + name;
    }

    public static void main(String[] args){
        try{
            Naming.rebind("//localhsot/Myserver", new ServerOperation());
            System.err.println("Servidor Pronto");

        }catch(Exception e){
            System.err.println("Servidor diz (exceção): " + e.toString());

            e.printStackTrace();
        }
    }
}
