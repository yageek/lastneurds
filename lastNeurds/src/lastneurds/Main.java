/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

import com.sun.org.apache.bcel.internal.generic.GETFIELD;
import java.util.ArrayList;

/**
 *
 * @author yaya
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
     NetworkSimple net = new NetworkSimple(10,2);
     


     ArrayList<Truth> Table = new ArrayList<Truth>();
     //FONCTION ET
     //00
     Truth truth = new Truth(2);
     truth.getEntries().set(0, 0.0);
     truth.getEntries().set(1, 0.0);
     truth.setOutput(0.0);
     Table.add(truth);

     //01
     truth = new Truth(2);
     truth.getEntries().set(0, 0.0);
     truth.getEntries().set(1, 1.0);
     truth.setOutput(0.0);
     Table.add(truth);

     //10
     truth = new Truth(2);
     truth.getEntries().set(0, 1.0);
     truth.getEntries().set(1, 0.0);
     truth.setOutput(0.0);
     Table.add(truth);

     //11
     truth = new Truth(2);
     truth.getEntries().set(0, 1.0);
     truth.getEntries().set(1, 1.0);
     truth.setOutput(1.0);
     Table.add(truth);

for(int i = 0; i < 50;i++){
             net.Learn(Table,0.04);
}
    

   new Truth(2);
     truth.getEntries().set(0, 1.0);
     truth.getEntries().set(1, 1.0);
     System.out.println("Retour du neurone 11 : " + net.Query(truth));

      truth.getEntries().set(0, 1.0);
     truth.getEntries().set(1, 0.0);
     System.out.println("Retour du neurone 10: " + net.Query(truth));

     truth.getEntries().set(0, 0.0);
     truth.getEntries().set(1, 1.0);
     System.out.println("Retour du neurone 01: " + net.Query(truth));

     truth.getEntries().set(0, 0.0);
     truth.getEntries().set(1, 0.0);
     System.out.println("Retour du neurone 00: " + net.Query(truth));


   
     
    }

}
