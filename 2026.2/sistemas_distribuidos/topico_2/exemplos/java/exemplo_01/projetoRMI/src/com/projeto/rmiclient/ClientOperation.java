package com.projeto.rmiclient;

import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import javax.swing.JOptionPane;
import com.projeto.rmiinterface.RMIInterface;

public class ClientOperation{
    private static RMIInterface proc_serv;
    
    public static void main(String[] args) throws 
    MalformedURLException, 
    RemoteException, 
    NotBoundException{
        proc_serv = (RMIInterface)
        Naming.lookup("//localhost/MyServer");

    String txt = JOptionPane.showInputDialog("Qual seu nome?");
    String response = proc_serv.helloTo(txt);
    JOptionPane.showMessageDialog(null, response);
    }

}