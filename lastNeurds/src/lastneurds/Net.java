/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package lastneurds;

/**
 *
 * @author yaya
 */
public class Net {

    public Net() {
        this.setWeight(Math.random());
    }

    public Neuron getAfter() {
        return after;
    }

    public void setAfter(Neuron after) {
        this.after = after;
    }

    public Neuron getBefore() {
        return before;
    }

    public void setBefore(Neuron before) {
        this.before = before;
    }

    private Neuron after;
    private Neuron  before;

    public double getWeight() {
        return weight;
    }

    public void setWeight(double weight) {
        this.weight = weight;
    }
    private double weight;

    public double getValue() {
        return value;
    }

    public void setValue(double value) {
        this.value = value;
    }
    private double value;


    public void Link(Neuron before,Neuron after){
        this.setBefore(before);
        this.setAfter(after);

        if(before!=null)  before.AddOutput(this);
        if(after!=null) after.AddEntry(this);

        
    }
    public void ApplyCorrection(double Err){

        this.setWeight(this.getWeight()+this.value*Err);
    }

    public void Display(){

        System.out.println("Net - Value : "+ this.getValue() + " - Weight : " + this.getWeight());
    }
}
