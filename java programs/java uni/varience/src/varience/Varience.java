
package varience;
import java.util.Scanner;
import java.text.DecimalFormat;
class CVarience{
    DecimalFormat df4=new DecimalFormat(".####");
    Scanner in=new Scanner(System.in);
    static int n;
    int Xi[]=new int[n];
    int fre[]=new int[n];
    int freXi[]=new int[n];
    int Xisq[]=new int[n];
    int FXisq[]=new int[n];
    double sumF,sumFXi,sumFXisq;
    double mean,varience;
      void setXi(){
          System.out.println("enter values of Xi");
          for(int x=0;x<Xi.length;x++){
            Xi[x]=in.nextInt();
          }
      }
      void showXi(){
          System.out.print("values of Xi ");
          for(int x=0;x<Xi.length;x++){
            System.out.print(Xi[x]+" ");
          }
          System.out.println();
      }
           void setFrequency(){
             double sum=0;
          System.out.println("enter values of frequency");
          for(int x=0;x<fre.length;x++){
            fre[x]=in.nextInt();
               sum+=fre[x];
               }
              sumF=sum;
            } 
           void showFrequency(){
          System.out.print("values of frequency ");
          for(int x=0;x<fre.length;x++){
            System.out.print(fre[x]+" ");
               }
             System.out.println();
            } 
           void setFreXi(){
               double sum=0;
               for(int x=0;x<freXi.length;x++){
                 freXi[x]=Xi[x]*fre[x];
                 sum+=freXi[x];
               }
               sumFXi=sum;
           }
           void showFreXi(){
               System.out.print("values of FXI ");
               for(int x=0;x<freXi.length;x++){
                 System.out.print(freXi[x]+" ");
               }
               System.out.println();
           }
     void showXiSquare(){
          System.out.print("values of XiSquare ");
          for(int x=0;x<Xisq.length;x++){
            Xisq[x]=Xi[x]*Xi[x];
            System.out.print(Xisq[x]+" ");
          }
          System.out.println();
      }      
      void showFXiSquare(){
          double sum=0;
          System.out.print("values of FXiSquare ");
          for(int x=0;x<Xisq.length;x++){
            FXisq[x]=fre[x]*Xisq[x];
            System.out.print(FXisq[x]+" ");
            sum+=FXisq[x];
          }
          sumFXisq=sum;
          System.out.println();
      }
      void Mean(){
          System.out.println("mean="+sumFXi+"/"+sumF);
          mean=(sumFXi/sumF);
          System.out.println("mean="+df4.format(mean));
      }
      void varience(){
          System.out.println("varience=("+sumFXisq+"/"+sumF+")-("+mean+")^sq");
          varience=(sumFXisq/sumF)-(mean*mean);
          System.out.println("varience="+df4.format(varience));
      }
}
public class Varience {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int f;
        System.out.println("enter total seriel no=");
        f=in.nextInt();
        CVarience.n=f;
        CVarience v=new CVarience();
        v.setXi();
        v.setFrequency();
        v.setFreXi();
        v.showXi();
        v.showFrequency();
        v.showFreXi();
        v.showXiSquare();
        v.showFXiSquare();
        v.Mean();
        v.varience();
      
    }
    
}
