
package pkg602inetaddress;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.Socket;
import java.net.UnknownHostException;

public class Main {

    public static void main(String[] args)throws UnknownHostException, IOException {
       InetAddress address=InetAddress.getLocalHost();
       System.out.println(address);/*
       address=InetAddress.getByName("www.facebook.com");
       System.out.println(address);
       InetAddress sw[]=InetAddress.getAllByName("www.facebook.com");
       for(int i=0;i<sw.length;i++){
          System.out.println(sw[i]);*/
       Socket s=new Socket("ahmad",43);
       InputStream in=s.getInputStream();
       OutputStream out=s.getOutputStream();
       }
    }
    

