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
public class DessinReseau extends JPanel implements Scrollable{
    private int NbrNeurons;
    

    public DessinReseau() {
       this.setAutoscrolls(true);
        this.setPreferredSize(new Dimension(800,400));

        
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
          this.setAutoscrolls(true);
          
        this.setPreferredSize(new Dimension(900,NbrNeurons*40 + 20));
      
        super.paintComponent(g);//on dessine le fond
        
        int xEntries = 10;
        int xNeurons = this.getWidth()/2;
        int height = this.getHeight();

        int yEntries = 10 + (this.NbrNeurons*40 - 80)/2;
        int yNeurons = 10;
   
        //On dessine le neurones de sorties
        g.setColor(Color.black);
        g.fillOval(this.getWidth()-45, yEntries - 5,40, 40);

       
        //On dessine les sorties
        
        for(int i = 0; i< NbrNeurons;i++){
            
            g.fillOval(xNeurons , yNeurons + i*40, 30, 30);
            

            //on le connect au neurones de sortie
            g.drawLine(this.getWidth()-25,yEntries+15, xNeurons +15,15+ yNeurons + i*40);
        }
        

        for(int i = 0; i < 2;i++){

            
            g.fillOval(xEntries, yEntries + i*40, 20, 20);
            
            for(int j =0; j < NbrNeurons;j++){
                g.drawLine(xEntries + 10,10+  yEntries + i*40, xNeurons + 15, 15 + yNeurons + j*40);

                
            }
            
        }
        this.setVisible(true);
        
    }

    public Dimension getPreferredScrollableViewportSize() {
        return getPreferredSize();
    }

    public int getScrollableUnitIncrement(Rectangle visibleRect, int orientation, int direction) {
         repaint();
       return 50;
    }

    public int getScrollableBlockIncrement(Rectangle visibleRect, int orientation, int direction) {
       repaint();
        return 100;
    }

    public boolean getScrollableTracksViewportWidth() {
        return false;
    }

    public boolean getScrollableTracksViewportHeight() {
        return false;
    }

 
}
