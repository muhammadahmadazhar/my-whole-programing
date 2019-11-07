
import java.sql.*;
import javax.swing.*;

public class Java_Connect {
    Connection conn=null;
    public static Connection connecrDB(){
        try{
        Class.forName("com.mysql.jdbc.Driver");
        Connection conn=DriverManager.getConnection("jdbc:mysql://localhost/project","root","");
        JOptionPane.showMessageDialog(null, "Connection Established");
        return conn;
        }
        catch (Exception e){
            JOptionPane.showMessageDialog(null,e);
            return null;
        }
    }
}
