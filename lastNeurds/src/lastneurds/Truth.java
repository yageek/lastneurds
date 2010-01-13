/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

import java.util.ArrayList;

/**
 *
 * @author yaya
 */
public class Truth {
    private ArrayList<Double> entries;
    private double output;

    public Truth(int sizeEntry) {
        this.entries = new ArrayList<Double>();
        this.sizeEntry = sizeEntry;

       for(int i = 0; i < sizeEntry;i++){
            this.entries.add(0.0);


       }
        this.output = 0;
    }
    private int sizeEntry;


    public ArrayList<Double> getEntries() {
        return entries;
    }

    public void setEntries(ArrayList<Double> entries) {
        this.entries = entries;
    }

    public double getOutput() {
        return output;
    }

    public void setOutput(double output) {
        this.output = output;
    }

}
