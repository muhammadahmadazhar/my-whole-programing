
package casearcipher;

import java.util.Scanner;


public class CasearCipher {

    public static void main(String[] args) {
        System.out.print("1.Encryption\n2.Decryption\nChoose(1,2):");
        Scanner in =new Scanner(System.in);
        int choice=in.nextInt();
            in.nextLine();
        if (choice == 1){
            System.out.println("Encryption");
            System.out.println("Message can only be upper or lower case Alphabet");
            System.out.print("Enter Message:");
            String msg=in.nextLine();
            System.out.print("Enter key (0-25):");
            int key=in.nextInt();
            String encryptMsg="";
            for (int i=0;i<msg.length();i++){
                if ((int)msg.charAt(i)+key == 32){
                    encryptMsg += (char)32;
                }
                else if ((int)msg.charAt(i) > 122){
                    int temp = ((int)msg.charAt(i) + key) - 122;
                    encryptMsg += (char)(96 + temp); 
                }
                else if ((int)msg.charAt(i)+key > 90 && (int)msg.charAt(i)+key < 96){
                    int temp= ((int)msg.charAt(i) + key) -90;
                    encryptMsg += (char)(64 + temp);
                }
                else{
                    encryptMsg += (char)((int)msg.charAt(i)+key);
                }
            }
            System.out.println(encryptMsg);
        }
        else if (choice == 2){
            System.out.println("Decryption");
        }
        else{
            System.out.println("Wrong Choice");
        }
    }
    
}
