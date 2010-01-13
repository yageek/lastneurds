/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Rectangle;
import javax.swing.JPanel;
import javax.swing.Scrollable;

/**
 *
 * @author yaya
 */
public class DessinReseau extends JPanel{
    private int NbrNeurons;
    

    public DessinReseau() {
       
        
    }

    public int getNbrNeurons() {
        return NbrNeurons;
    }

    public void setNbrNeurons(int NbrNeurons) {
        this.NbrNeurons = NbrNeurons;
    }

    public DessinReseau(int NbrNeurons) {
        this.NbrNeurons = NbrNeurons;

    }


    @Override
    public void paintComponent(Graphics g){
        super.paintComponent(g);//on dessine le fond
        
        int xEntries = 10;
        int xNeurons = this.getWidth()/2;
        int height = this.getHeight();

        int yEntries = 10 + (this.NbrNeurons*40 - 80)/2;
        int yNeurons = 10;
   
        //On dessine les entrées

       
        //On dessine les sorties
        
        for(int i = 0; i< NbrNeurons;i++){
            g.setColor(Color.blue);
            g.fillOval(xNeurons , yNeurons + i*40, 30, 30);
            
        }
        

        for(int i = 0; i < 2;i++){

            g.setColor(Color.red);
            g.fillOval(xEntries, yEntries + i*40, 20, 20);
            g.setColor(Color.black);
            for(int j =0; j < NbrNeurons;j++){
                g.drawLine(xEntries + 10,10+  yEntries + i*40, xNeurons + 15, 15 + yNeurons + j*40);

                
            }
            
        }

        
    }

 
}
